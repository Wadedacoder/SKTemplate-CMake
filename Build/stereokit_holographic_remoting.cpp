
#include "stereokit_holographic_remoting.h"

stereokit_holographic_remoting::stereokit_holographic_remoting(std::string& ipAddress, int port, bool sendAudio, int maxBitrateKbps, bool wideAudioCapture)
{
	_ipAddress = ipAddress;
	_port = port;
	_sendAudio = sendAudio;
	_maxBitrate = maxBitrateKbps;
	_wideAudioCapture = wideAudioCapture;

	if(sk::sk_initialized)
}

void stereokit_holographic_remoting::SetEnabled(bool enabled)
{
	m_enabled = enabled;
}

