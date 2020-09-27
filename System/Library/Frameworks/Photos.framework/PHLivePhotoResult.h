/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {

	PHCompositeMediaResult* _imageResult;
	PHCompositeMediaResult* _videoResult;
	BOOL _isDegraded;

}
-(BOOL)isPlaceholder;
-(id)imageData;
-(id)exifOrientation;
-(CGImageRef)imageRef;
-(id)imageURL;
-(id)videoURL;
-(id)uniformTypeIdentifier;
-(BOOL)containsValidData;
-(id)allowedInfoKeys;
-(id)sanitizedInfoDictionary;
-(long long)uiOrientation;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(BOOL)isDegraded;
-(void)setDegraded:(BOOL)arg1 ;
-(void)_mergeInfoDictionaryFromResult:(id)arg1 ;
-(void)addImageResult:(id)arg1 ;
-(void)addVideoResult:(id)arg1 ;
@end
