/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speechRecognitionId; 
@property (assign,nonatomic) long long utteranceIndex; 
+(id)changePrimaryUtterance;
+(id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechRecognitionId;
-(void)setSpeechRecognitionId:(NSString *)arg1 ;
-(long long)utteranceIndex;
-(void)setUtteranceIndex:(long long)arg1 ;
@end
