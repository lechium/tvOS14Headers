/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPDRecoveryOption : NSObject {

	NSString* _localizedRecoveryOption;
	/*^block*/id _recoveryHandler;
	long long _recoveryOptionIndex;

}

@property (nonatomic,copy) NSString * localizedRecoveryOption;              //@synthesize localizedRecoveryOption=_localizedRecoveryOption - In the implementation block
@property (nonatomic,copy) id recoveryHandler;                              //@synthesize recoveryHandler=_recoveryHandler - In the implementation block
@property (assign,nonatomic) long long recoveryOptionIndex;                 //@synthesize recoveryOptionIndex=_recoveryOptionIndex - In the implementation block
-(NSString *)localizedRecoveryOption;
-(id)recoveryHandler;
-(void)setLocalizedRecoveryOption:(NSString *)arg1 ;
-(void)setRecoveryHandler:(id)arg1 ;
-(long long)recoveryOptionIndex;
-(void)setRecoveryOptionIndex:(long long)arg1 ;
@end
