/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVPlayback/TVPlayback-Structs.h>
@interface TVPFairPlaySAPContext : NSObject {

	BOOL _setupComplete;
	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_* _fairPlayHardwareInfo;

}

@property (assign,getter=isSetupComplete,nonatomic) BOOL setupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) FPSAPContextOpaque_Ref fairPlaySAPContext;              //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (assign,nonatomic) FairPlayHWInfo_* fairPlayHardwareInfo;                  //@synthesize fairPlayHardwareInfo=_fairPlayHardwareInfo - In the implementation block
+(id)_digestForData:(id)arg1 ;
-(void)dealloc;
-(id)encryptData:(id)arg1 ;
-(id)signatureForData:(id)arg1 ;
-(BOOL)isSetupComplete;
-(id)decryptData:(id)arg1 ;
-(void)setSetupComplete:(BOOL)arg1 ;
-(FPSAPContextOpaque_Ref)fairPlaySAPContext;
-(void)setFairPlaySAPContext:(FPSAPContextOpaque_Ref)arg1 ;
-(FairPlayHWInfo_*)fairPlayHardwareInfo;
-(BOOL)validateData:(id)arg1 encryptedSignature:(id)arg2 ;
-(long long)setupWithInputData:(id)arg1 outputData:(id*)arg2 ;
-(id)signatureForString:(id)arg1 ;
-(BOOL)validateString:(id)arg1 encryptedSignature:(id)arg2 ;
-(void)setFairPlayHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end
