//
// Created by user on 5/22/23.
//

#ifndef FFMPEG_VIDEO_PLAYER_J_AUDIO_RENDER_H
#define FFMPEG_VIDEO_PLAYER_J_AUDIO_RENDER_H
#include <cstdint>
namespace j_video_player {
class IAudioRender {
public:
  virtual ~IAudioRender() = default;
  virtual void initAudioRender() = 0;
  virtual void uninit() = 0;
  virtual void clearAudioCache() = 0;

  /**
   * interleave int16 audio samples
   */
  virtual void renderAudioData(int16_t *data, int nb_samples) = 0;
};
} // namespace j_video_player

#endif // FFMPEG_VIDEO_PLAYER_J_AUDIO_RENDER_H
