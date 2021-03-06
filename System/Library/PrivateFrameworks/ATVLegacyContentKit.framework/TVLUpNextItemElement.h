/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLVideoAssetElement;

@interface TVLUpNextItemElement : TVLElement {

	TVLVideoAssetElement* _videoAsset;

}

@property (nonatomic,retain) TVLVideoAssetElement * videoAsset;              //@synthesize videoAsset=_videoAsset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setVideoAsset:(TVLVideoAssetElement *)arg1 ;
-(TVLVideoAssetElement *)videoAsset;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

