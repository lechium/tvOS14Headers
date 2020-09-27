/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPlaceholder.h>

@class UIWebDocumentView, DOMElement;

@interface UIWebTextPlaceholder : UITextPlaceholder {

	UIWebDocumentView* _webDocumentView;
	DOMElement* _element;

}

@property (nonatomic,retain) DOMElement * element;              //@synthesize element=_element - In the implementation block
+(id)placeholderWithWebDocumentView:(id)arg1 ;
-(void)dealloc;
-(DOMElement *)element;
-(void)setElement:(DOMElement *)arg1 ;
-(id)rects;
@end
