/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXHUDVisualizationDelegate.h>

@class PXHUDVisualization, NSString;

@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate> {

	PXHUDVisualization* _visualization;

}

@property (nonatomic,retain) PXHUDVisualization * visualization;              //@synthesize visualization=_visualization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visualizationDidChange:(id)arg1 ;
-(void)setVisualization:(PXHUDVisualization *)arg1 ;
-(void)visualizationDidUpdate;
-(PXHUDVisualization *)visualization;
@end

