/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIMediaTagsViewLayout;

@interface VUINowPlayingHudMetaDataViewLayout : TVViewLayout {

	VUITextLayout* _titleLayout;
	VUITextLayout* _descriptionLayout;
	VUIMediaTagsViewLayout* _badgeViewLayout;

}

@property (nonatomic,readonly) VUITextLayout * titleLayout;                           //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionLayout;                     //@synthesize descriptionLayout=_descriptionLayout - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * badgeViewLayout;              //@synthesize badgeViewLayout=_badgeViewLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleLayout;
-(VUITextLayout *)descriptionLayout;
-(VUIMediaTagsViewLayout *)badgeViewLayout;
@end
