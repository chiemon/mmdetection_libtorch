#include "torch/script.h"
#include "torch/torch.h"
#include "types.hpp"

void transform(const cv::Mat& image, torch::Tensor& image_tensor,
               TransformParams& transform_params, int& net_width,
               int& net_height, torch::DeviceType* device);
