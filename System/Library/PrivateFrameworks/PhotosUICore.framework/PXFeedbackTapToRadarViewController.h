/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_PXFeedbackTapToRadarViewControllerDelegate.h>

@class NSArray, _PXFeedbackTapToRadarViewController, NSString;

@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate> {

	BOOL _requestScreenshotPermission;
	/*^block*/id _fileRadarHandler;
	NSArray* _routes;
	_PXFeedbackTapToRadarViewController* _feedbackViewController;

}

@property (nonatomic,retain) _PXFeedbackTapToRadarViewController * feedbackViewController;              //@synthesize feedbackViewController=_feedbackViewController - In the implementation block
@property (nonatomic,copy) id fileRadarHandler;                                                         //@synthesize fileRadarHandler=_fileRadarHandler - In the implementation block
@property (assign,nonatomic) BOOL requestScreenshotPermission;                                          //@synthesize requestScreenshotPermission=_requestScreenshotPermission - In the implementation block
@property (nonatomic,copy) NSArray * routes;                                                            //@synthesize routes=_routes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(id)availableRoutes;
-(void)didSelectFileRadarButtonWithScreenshotAllowed:(BOOL)arg1 attachDiagnose:(BOOL)arg2 selectedRoute:(id)arg3 ;
-(BOOL)shouldRequestScreenshotPermission;
-(id)fileRadarHandler;
-(void)setFileRadarHandler:(id)arg1 ;
-(BOOL)requestScreenshotPermission;
-(void)setRequestScreenshotPermission:(BOOL)arg1 ;
-(_PXFeedbackTapToRadarViewController *)feedbackViewController;
-(void)setFeedbackViewController:(_PXFeedbackTapToRadarViewController *)arg1 ;
@end

