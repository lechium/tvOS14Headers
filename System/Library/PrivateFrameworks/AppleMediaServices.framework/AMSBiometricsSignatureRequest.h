/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol;
#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class ACAccount, NSString, AMSProcessInfo, AMSKeychainOptions, LAContext, NSDictionary;

@interface AMSBiometricsSignatureRequest : NSObject {

	BOOL _dualAction;
	SecAccessControlRef _localAuthAccessControlRef;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _challenge;
	AMSProcessInfo* _clientInfo;
	AMSKeychainOptions* _keychainOptions;
	LAContext* _localAuthContext;
	NSDictionary* _localAuthOptions;

}

@property (nonatomic,copy,readonly) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                       //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * challenge;                                  //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,copy,readonly) AMSProcessInfo * clientInfo;                           //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,getter=isDualAction,nonatomic) BOOL dualAction;                          //@synthesize dualAction=_dualAction - In the implementation block
@property (nonatomic,readonly) AMSKeychainOptions * keychainOptions;                       //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (nonatomic,readonly) SecAccessControlRef localAuthAccessControlRef;              //@synthesize localAuthAccessControlRef=_localAuthAccessControlRef - In the implementation block
@property (nonatomic,readonly) LAContext * localAuthContext;                               //@synthesize localAuthContext=_localAuthContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * localAuthOptions;                            //@synthesize localAuthOptions=_localAuthOptions - In the implementation block
-(void)dealloc;
-(NSString *)challenge;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setDualAction:(BOOL)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(BOOL)isDualAction;
-(AMSKeychainOptions *)keychainOptions;
-(id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)_localAuthOptions;
-(SecAccessControlRef)localAuthAccessControlRef;
-(void)setLocalAuthAccessControlRef:(SecAccessControlRef)arg1 ;
-(LAContext *)localAuthContext;
-(NSDictionary *)localAuthOptions;
@end

