#import "ArrayUtil.h"
#import "ByteVector.h"
#import "CVObjcUtil.h"
#import "Converters.h"
#import "CvType.h"
#import "DMatch.h"
#import "Double2.h"
#import "Double3.h"
#import "DoubleVector.h"
#import "Float4.h"
#import "Float6.h"
#import "FloatVector.h"
#import "Int4.h"
#import "IntVector.h"
#import "KeyPoint.h"
#import "Mat.h"
#import "MatOfByte.h"
#import "MatOfDMatch.h"
#import "MatOfDouble.h"
#import "MatOfFloat.h"
#import "MatOfFloat4.h"
#import "MatOfFloat6.h"
#import "MatOfInt.h"
#import "MatOfInt4.h"
#import "MatOfKeyPoint.h"
#import "MatOfPoint2f.h"
#import "MatOfPoint2i.h"
#import "MatOfPoint3.h"
#import "MatOfPoint3f.h"
#import "MatOfRect2d.h"
#import "MatOfRect2i.h"
#import "MatOfRotatedRect.h"
#import "MinMaxLocResult.h"
#import "Point2d.h"
#import "Point2f.h"
#import "Point2i.h"
#import "Point3d.h"
#import "Point3f.h"
#import "Point3i.h"
#import "Range.h"
#import "Rect2d.h"
#import "Rect2f.h"
#import "Rect2i.h"
#import "RotatedRect.h"
#import "Scalar.h"
#import "Size2d.h"
#import "Size2f.h"
#import "Size2i.h"
#import "TermCriteria.h"
#import "Core.h"
#import "Algorithm.h"
#import "TickMeter.h"
#import "Moments.h"
#import "Imgproc.h"
#import "CLAHE.h"
#import "Subdiv2D.h"
#import "GeneralizedHoughBallard.h"
#import "GeneralizedHough.h"
#import "GeneralizedHoughGuil.h"
#import "LineSegmentDetector.h"
#import "EM.h"
#import "SVM.h"
#import "Ml.h"
#import "NormalBayesClassifier.h"
#import "TrainData.h"
#import "Boost.h"
#import "LogisticRegression.h"
#import "ParamGrid.h"
#import "KNearest.h"
#import "SVMSGD.h"
#import "DTrees.h"
#import "ANN_MLP.h"
#import "StatModel.h"
#import "RTrees.h"
#import "MergeMertens.h"
#import "TonemapMantiuk.h"
#import "CalibrateRobertson.h"
#import "CalibrateDebevec.h"
#import "TonemapReinhard.h"
#import "Photo.h"
#import "AlignExposures.h"
#import "CalibrateCRF.h"
#import "TonemapDrago.h"
#import "AlignMTB.h"
#import "MergeDebevec.h"
#import "MergeExposures.h"
#import "MergeRobertson.h"
#import "Tonemap.h"
#import "Layer.h"
#import "Dnn.h"
#import "SegmentationModel.h"
#import "KeypointsModel.h"
#import "DictValue.h"
#import "ClassificationModel.h"
#import "DetectionModel.h"
#import "Model.h"
#import "Net.h"
#import "BOWImgDescriptorExtractor.h"
#import "FastFeatureDetector.h"
#import "Feature2D.h"
#import "BRISK.h"
#import "SimpleBlobDetector.h"
#import "AgastFeatureDetector.h"
#import "GFTTDetector.h"
#import "DescriptorMatcher.h"
#import "KAZE.h"
#import "Features2d.h"
#import "SIFT.h"
#import "AKAZE.h"
#import "Params.h"
#import "BFMatcher.h"
#import "BOWTrainer.h"
#import "ORB.h"
#import "MSER.h"
#import "BOWKMeansTrainer.h"
#import "FlannBasedMatcher.h"
#import "Mat+Converters.h"
#import "Imgcodecs.h"
#import "CvCamera2.h"
#import "VideoWriter.h"
#import "Videoio.h"
#import "VideoCapture.h"
#import "StereoSGBM.h"
#import "CirclesGridFinderParameters.h"
#import "StereoBM.h"
#import "Calib3d.h"
#import "StereoMatcher.h"
#import "HOGDescriptor.h"
#import "QRCodeDetector.h"
#import "CascadeClassifier.h"
#import "BaseCascadeClassifier.h"
#import "Objdetect.h"
#import "SparsePyrLKOpticalFlow.h"
#import "FarnebackOpticalFlow.h"
#import "SparseOpticalFlow.h"
#import "DenseOpticalFlow.h"
#import "BackgroundSubtractor.h"
#import "Video.h"
#import "DISOpticalFlow.h"
#import "KalmanFilter.h"
#import "BackgroundSubtractorMOG2.h"
#import "VariationalRefinement.h"
#import "BackgroundSubtractorKNN.h"