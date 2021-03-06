/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRImage, MRCroppingSprite;

@interface MRShiftingTilesRenderable : NSObject {

	MRImage* slide;
	MRCroppingSprite* sprite;
	CGPoint position;
	CGSize size;
	BOOL isBreak;

}

@property (nonatomic,retain) MRImage * slide; 
@property (nonatomic,retain) MRCroppingSprite * sprite; 
-(void)dealloc;
-(void)setSlide:(MRImage *)arg1 ;
-(MRImage *)slide;
-(MRCroppingSprite *)sprite;
-(void)setSprite:(MRCroppingSprite *)arg1 ;
@end

