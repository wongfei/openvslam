#pragma once

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/features2d.hpp>

#if CV_MAJOR_VERSION == 2

namespace cv {

inline void undistortPoints(InputArray src, OutputArray dst, InputArray cameraMatrix, InputArray distCoeffs, InputArray R, InputArray P, TermCriteria criteria)
{
    // TODO: use criteria
    cv::undistortPoints(src, dst, cameraMatrix, distCoeffs, R, P);
}

}

#endif
