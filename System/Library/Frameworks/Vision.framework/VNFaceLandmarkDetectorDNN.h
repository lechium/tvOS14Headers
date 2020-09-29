/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkDetector.h>

@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {

	shared_ptr<vision::mod::LandmarkDetectorDNN>* _landmarkDetector;
	vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >* _landmarkPoints65;

}

@property (readonly) vector<_Geometry2D_point2D_* landmarkPoints65; 
+(id)inputBlobNames;
+(id)outputBlobNames;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(const map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > >*)_requestConstellationToDetectorConstellationMap;
-(void)releaseResources;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(vector<_Geometry2D_point2D_*)landmarkPoints65;
-(BOOL)getConstellation:(unsigned long long*)arg1 cvmlConstellation:(int*)arg2 fromOptions:(id)arg3 error:(id*)arg4 ;
-(BOOL)getLandmarkPoints:(vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 forConstellation:(int)arg2 error:(id*)arg3 ;
-(BOOL)getLandmarkErrorEstimates:(vector<float, std::__1::allocator<float> >*)arg1 forConstellation:(int)arg2 error:(id*)arg3 ;
-(BOOL)getLandmarkOcclusionFlags:(vector<bool, std::__1::allocator<bool> >*)arg1 forConstellation:(int)arg2 error:(id*)arg3 ;
-(BOOL)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id*)arg4 ;
@end

