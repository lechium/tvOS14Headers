/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@class UITextView, NSDictionary;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController {

	BOOL _exportHighlightEstimatesOnViewDidAppear;
	UITextView* _textView;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (assign) BOOL exportHighlightEstimatesOnViewDidAppear;              //@synthesize exportHighlightEstimatesOnViewDidAppear=_exportHighlightEstimatesOnViewDidAppear - In the implementation block
@property (retain) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (retain) NSDictionary * highlightEstimatesDictionary;               //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
-(void)viewDidLoad;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_fetchHighlightEstimatesDictionary;
-(void)_sendEmail:(id)arg1 ;
-(BOOL)exportHighlightEstimatesOnViewDidAppear;
-(void)setExportHighlightEstimatesOnViewDidAppear:(BOOL)arg1 ;
-(NSDictionary *)highlightEstimatesDictionary;
-(void)setHighlightEstimatesDictionary:(NSDictionary *)arg1 ;
@end
