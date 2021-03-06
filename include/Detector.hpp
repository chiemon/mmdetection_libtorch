#ifndef DETECTOR_HPP
#define DETECTOR_HPP

#include <memory>

#include "torch/torch.h"
#include "types.hpp"

class DetectorImpl;

class Detector {
 public:
  Detector();
  ~Detector();

  long Create(DetetorType detetorType);
  void LoadParams(const Params& params, torch::DeviceType* device_type);
  void LoadTracedModule();
  long Detect(const cv::Mat& image, std::vector<DetectedBox>& detected_boxes);

 private:
  std::unique_ptr<DetectorImpl> impl_;
};

#endif  // DETECTOR_HPP
