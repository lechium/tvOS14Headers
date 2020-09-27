/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BMStreamValidating.h>

@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating> {

	NSArray* __validators;

}

@property (nonatomic,copy) NSArray * _validators;                   //@synthesize _validators=__validators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(NSArray *)_validators;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(void)set_validators:(NSArray *)arg1 ;
@end
