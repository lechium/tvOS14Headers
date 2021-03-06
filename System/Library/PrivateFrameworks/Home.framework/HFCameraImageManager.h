/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCameraProfile, HFCameraClipVideoAssetOperationCache, NSOperationQueue, HFCameraImageCache, NSMutableDictionary;

@interface HFCameraImageManager : NSObject {

	HMCameraProfile* _cameraProfile;
	HFCameraClipVideoAssetOperationCache* _fetchCache;
	NSOperationQueue* _posterFrameQueue;
	HFCameraImageCache* _imageCache;
	NSMutableDictionary* _imageObservers;
	NSMutableDictionary* _generationObservers;
	NSMutableDictionary* _inProgressOperations;
	NSMutableDictionary* _requestedHeroFrameCache;
	NSMutableDictionary* _requestedFaceCropCache;
	NSMutableDictionary* _requestedPosterFrameCache;

}

@property (nonatomic,retain) NSOperationQueue * posterFrameQueue;                            //@synthesize posterFrameQueue=_posterFrameQueue - In the implementation block
@property (nonatomic,retain) HFCameraImageCache * imageCache;                                //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageObservers;                           //@synthesize imageObservers=_imageObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * generationObservers;                      //@synthesize generationObservers=_generationObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inProgressOperations;                     //@synthesize inProgressOperations=_inProgressOperations - In the implementation block
@property (nonatomic,retain) HFCameraClipVideoAssetOperationCache * fetchCache;              //@synthesize fetchCache=_fetchCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedHeroFrameCache;                  //@synthesize requestedHeroFrameCache=_requestedHeroFrameCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedFaceCropCache;                   //@synthesize requestedFaceCropCache=_requestedFaceCropCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedPosterFrameCache;                //@synthesize requestedPosterFrameCache=_requestedPosterFrameCache - In the implementation block
@property (assign,nonatomic,__weak) HMCameraProfile * cameraProfile;                         //@synthesize cameraProfile=_cameraProfile - In the implementation block
+(id)sharedManager;
+(id)clipIdentifierStringFromDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(HFCameraImageCache *)imageCache;
-(void)setImageCache:(HFCameraImageCache *)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2 ;
-(void)purgePosterFrames;
-(double)_timeScaleAdjustedOffset:(double)arg1 ;
-(id)heroFrameImageForClip:(id)arg1 ;
-(NSMutableDictionary *)imageObservers;
-(id)imageObserversForKey:(id)arg1 ;
-(NSMutableDictionary *)requestedFaceCropCache;
-(void)failedToFindFaceCropForClip:(id)arg1 withKey:(id)arg2 ;
-(NSMutableDictionary *)requestedHeroFrameCache;
-(void)failToFindHeroFrameForClip:(id)arg1 ;
-(id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2 ;
-(void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 ;
-(void)_generateMissingPosterFrameImageForClip:(id)arg1 atOffset:(double)arg2 observer:(id)arg3 ;
-(id)keyForClip:(id)arg1 timeOffset:(double)arg2 ;
-(NSMutableDictionary *)inProgressOperations;
-(void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4 ;
-(void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3 ;
-(NSOperationQueue *)posterFrameQueue;
-(id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2 ;
-(id)keyForClip:(id)arg1 ;
-(NSMutableDictionary *)generationObservers;
-(HFCameraClipVideoAssetOperationCache *)fetchCache;
-(void)_generateImageUsingAsset:(id)arg1 clip:(id)arg2 offset:(double)arg3 observer:(id)arg4 ;
-(void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3 ;
-(id)faceCropForClip:(id)arg1 atOffset:(double)arg2 ;
-(id)faceCropForPersonName:(id)arg1 ;
-(id)faceCropImagesForClip:(id)arg1 atOffset:(double)arg2 ;
-(id)representativeImageForClip:(id)arg1 ;
-(void)addFaceCropImageObserver:(id)arg1 forClip:(id)arg2 usingSignificantEvent:(id)arg3 ;
-(void)removeFaceCropImageObserver:(id)arg1 forPersonName:(id)arg2 ;
-(void)addHeroFrameImageObserver:(id)arg1 forClip:(id)arg2 ;
-(void)removeHeroFrameImageObserver:(id)arg1 forClip:(id)arg2 ;
-(void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3 ;
-(void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)resetForCameraDismissal;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)setFetchCache:(HFCameraClipVideoAssetOperationCache *)arg1 ;
-(void)setPosterFrameQueue:(NSOperationQueue *)arg1 ;
-(void)setImageObservers:(NSMutableDictionary *)arg1 ;
-(void)setGenerationObservers:(NSMutableDictionary *)arg1 ;
-(void)setInProgressOperations:(NSMutableDictionary *)arg1 ;
-(void)setRequestedHeroFrameCache:(NSMutableDictionary *)arg1 ;
-(void)setRequestedFaceCropCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)requestedPosterFrameCache;
-(void)setRequestedPosterFrameCache:(NSMutableDictionary *)arg1 ;
@end

