/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLStatusCode, NSString;

@interface SAMLStatus : SAMLBaseElement

@property (nonatomic,readonly) SAMLStatusCode * statusCode; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * statusDetail; 
+(id)createElement:(id*)arg1 ;
-(SAMLStatusCode *)statusCode;
-(id)status;
-(NSString *)statusMessage;
-(NSString *)statusDetail;
@end
