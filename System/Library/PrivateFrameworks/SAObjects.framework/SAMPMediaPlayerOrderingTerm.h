/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaPlayerOrderingDirection; 
@property (assign,nonatomic) int mediaPlayerSearchProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaPlayerOrderingTerm;
+(id)mediaPlayerOrderingTermWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaPlayerOrderingDirection;
-(void)setMediaPlayerOrderingDirection:(NSString *)arg1 ;
-(int)mediaPlayerSearchProperty;
-(void)setMediaPlayerSearchProperty:(int)arg1 ;
@end
