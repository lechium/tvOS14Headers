/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVUIKit/_TVStackedMediaEntryView.h>

@class _TVStackedMediaDocumentEntry, CALayer, NSString;

@interface _TVStackedImageView : UIView <_TVStackedMediaEntryView> {

	_TVStackedMediaDocumentEntry* _entry;
	CALayer* _imageLayer;

}

@property (nonatomic,retain) _TVStackedMediaDocumentEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) CALayer * imageLayer;                              //@synthesize imageLayer=_imageLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVStackedMediaDocumentEntry *)entry;
-(void)setEntry:(_TVStackedMediaDocumentEntry *)arg1 ;
-(void)layoutSubviews;
-(CALayer *)imageLayer;
-(void)_displayImageRef:(CGImageRef)arg1 ;
-(void)configureWithEntry:(id)arg1 ;
-(void)setImageLayer:(CALayer *)arg1 ;
@end

