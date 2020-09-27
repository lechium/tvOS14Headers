/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAccessibilityElement.h>
#import <libobjc.A.dylib/AXPTranslationElementProtocol.h>

@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol> {

	AXPTranslationObject* translation;

}

@property (nonatomic,retain) AXPTranslationObject * translation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformElementWithTranslationObject:(id)arg1 ;
+(id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2 ;
-(AXPTranslationObject *)translation;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
@end
