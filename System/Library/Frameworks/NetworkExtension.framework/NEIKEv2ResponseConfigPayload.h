/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2ConfigPayload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {

	NEIKEv2ConfigurationMessage* _configurationRequest;

}

@property (retain) NEIKEv2ConfigurationMessage * configurationRequest;              //@synthesize configurationRequest=_configurationRequest - In the implementation block
-(NEIKEv2ConfigurationMessage *)configurationRequest;
-(void)setConfigurationRequest:(NEIKEv2ConfigurationMessage *)arg1 ;
-(BOOL)parsePayloadData;
-(id)initWithResponseConfigPayload:(id)arg1 configRequest:(id)arg2 ;
@end

