/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLEvent.h>

@class NSString;

@interface MTLToolsEvent : MTLToolsObject <MTLEvent>

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

