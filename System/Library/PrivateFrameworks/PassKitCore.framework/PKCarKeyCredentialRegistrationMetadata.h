/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCredentialRegistrationMetadata.h>

@class NSString;

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata {

	NSString* _make;
	NSString* _model;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * make;                //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) NSString * model;               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long keyType;              //@synthesize keyType=_keyType - In the implementation block
-(long long)keyType;
-(NSString *)model;
-(NSString *)make;
-(id)initWithMake:(id)arg1 model:(id)arg2 keyType:(long long)arg3 ;
@end

