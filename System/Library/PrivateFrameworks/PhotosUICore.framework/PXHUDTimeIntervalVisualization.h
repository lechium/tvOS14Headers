/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXHUDVisualization.h>

@class PXTimeInterval;

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {

	id _stateTransitionHandlerToken;
	PXTimeInterval* _timeInterval;

}

@property (nonatomic,retain) PXTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(id)visualizationWithTimeInterval:(id)arg1 ;
-(PXTimeInterval *)timeInterval;
-(void)setTimeInterval:(PXTimeInterval *)arg1 ;
@end

