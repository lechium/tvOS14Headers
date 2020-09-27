/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLEditSource.h>

@class PLEditSource, PLVideoEditSource;

@interface PLLivePhotoEditSource : PLEditSource {

	PLEditSource* _photoEditSource;
	PLVideoEditSource* _videoEditSource;

}

@property (nonatomic,readonly) PLEditSource * photoEditSource;                   //@synthesize photoEditSource=_photoEditSource - In the implementation block
@property (nonatomic,readonly) PLVideoEditSource * videoEditSource;              //@synthesize videoEditSource=_videoEditSource - In the implementation block
+(id)livePhotoSourceWithPhotoURL:(id)arg1 videoComplementURL:(id)arg2 ;
-(id)initWithPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(id)initWithSubstandardPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(id)_initWithPhotoSource:(id)arg1 videoComplement:(id)arg2 ;
-(PLEditSource *)photoEditSource;
-(PLVideoEditSource *)videoEditSource;
@end
