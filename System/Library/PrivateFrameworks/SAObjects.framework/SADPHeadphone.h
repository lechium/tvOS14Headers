/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (assign,nonatomic) BOOL inOrOverEar; 
@property (nonatomic,copy) NSString * position; 
+(id)headphone;
+(id)headphoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(id)groupIdentifier;
-(void)setPosition:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)inOrOverEar;
-(void)setInOrOverEar:(BOOL)arg1 ;
@end
