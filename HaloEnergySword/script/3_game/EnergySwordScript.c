class Energy_Sword : Weapon_Base
{
    private ref SoundOnSound m_LoopSound;

    void Energy_Sword()
    {
        if (GetGame().IsServer())
        {
            RegisterNetSyncVariableBool("m_IsEquipped");
        }
    }

    override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
    {
        super.OnItemLocationChanged(old_owner, new_owner);
        PrintToRPT("EnergySword OnItemLocationChanged called");  // Debug message

        if (GetGame().IsClient())
        {
            PrintToRPT("EnergySword Game is running on client");  // Debug message
            if (new_owner && new_owner.IsInherited(PlayerBase))
            {
                PrintToRPT("EnergySword New owner is a PlayerBase");  // Debug message
                PlayLoopSound();
            }
            else
            {
                PrintToRPT("EnergySword New owner is not a PlayerBase");  // Debug message
                StopLoopSound();
            }
        }
    }


    void PlayLoopSound()
    {
        PrintToRPT("EnergySword PlayLoopSound called");  // Debug message
        if (!m_LoopSound)
        {
            m_LoopSound = SEffectManager.PlayOnObject("EnergySword_Equip_soundset", this);
            PrintToRPT("EnergySword Loop sound started");  // Debug message
        }
    }

    void StopLoopSound()
    {
        PrintToRPT("EnergySword StopLoopSound called");  // Debug message
        if (m_LoopSound)
        {
            m_LoopSound.SoundStop();
            m_LoopSound = null;
            PrintToRPT("EnergySword Loop sound stopped");  // Debug message
        }
    }
};
