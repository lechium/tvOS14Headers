/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface CFVSGetVoiceAssetsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * voiceAssets; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getVoiceAssetsResponse;
+(id)getVoiceAssetsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setVoiceAssets:(NSArray *)arg1 ;
-(NSArray *)voiceAssets;
@end

