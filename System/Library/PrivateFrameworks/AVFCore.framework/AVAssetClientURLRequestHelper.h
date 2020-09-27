/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToAsset;
	/*^block*/id _figAssetProvider;
	AVWeakReference* _weakReferenceToResourceLoader;

}

@property (nonatomic,copy) id figAssetProvider;                                          //@synthesize figAssetProvider=_figAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) const OpaqueFigAssetRef figAsset; 
-(void)dealloc;
-(id)URLAsset;
-(AVAssetResourceLoader *)resourceLoader;
-(id)initWithAsset:(id)arg1 ;
-(const OpaqueFigAssetRef)figAsset;
-(void)setFigAssetProvider:(id)arg1 ;
-(void)setResourceLoader:(AVAssetResourceLoader *)arg1 ;
-(id)figAssetProvider;
@end
