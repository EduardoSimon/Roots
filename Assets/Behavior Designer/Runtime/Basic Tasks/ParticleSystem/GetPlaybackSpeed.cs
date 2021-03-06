using UnityEngine;

namespace BehaviorDesigner.Runtime.Tasks.Basic.UnityParticleSystem
{
    [TaskCategory("Basic/ParticleSystem")]
    [TaskDescription("Stores the playback speed of the Particle System.")]
    public class GetPlaybackSpeed : Action
    {
        [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
        public SharedGameObject targetGameObject;
        [Tooltip("The playback speed of the ParticleSystem")]
        [RequiredField]
        public SharedFloat storeResult;

        private ParticleSystem particleSystem;
        private GameObject prevGameObject;

        public override void OnStart()
        {
            var currentGameObject = GetDefaultGameObject(targetGameObject.Value);
            if (currentGameObject != prevGameObject) {
                particleSystem = currentGameObject.GetComponent<ParticleSystem>();
                prevGameObject = currentGameObject;
            }
        }

        public override TaskStatus OnUpdate()
        {
            if (particleSystem == null) {
                Debug.LogWarning("ParticleSystem is null");
                return TaskStatus.Failure;
            }

#if UNITY_5_3 || UNITY_5_4
            storeResult.Value = particleSystem.playbackSpeed;
#else
            ParticleSystem.MainModule mainParticleSystem = particleSystem.main;
            storeResult.Value = mainParticleSystem.simulationSpeed;
#endif

            return TaskStatus.Success;
        }

        public override void OnReset()
        {
            targetGameObject = null;
            storeResult = 0;
        }
    }
}