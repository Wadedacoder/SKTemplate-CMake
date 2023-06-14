#pragma once
#include "stereokit.h"
#include <string>

class stereokit_holographic_remoting
{
	private:
		static const std::string reremotingExtName;
		//  = "XR_MSFT_holographic_remoting"

		std::string _ipAddress;
		int _port;
		bool   _sendAudio;
		int    _maxBitrate;
		bool   _wideAudioCapture;
		bool   m_enabled;


		void SetEnabled(bool enabled);

	public:

		stereokit_holographic_remoting(std::string& ipAddress, int port, bool sendAudio = true, int maxBitrateKbps, bool wideAudioCapture);

		//bool Initialize() = > Enabled;
		void Initialize();

        void OnPreCreateSession();

		bool getEnabled() { return m_enabled; }
};

