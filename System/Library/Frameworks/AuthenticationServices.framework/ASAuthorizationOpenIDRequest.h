/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/ASAuthorizationRequest.h>

@class NSArray, NSString;

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {

	NSArray* _requestedScopes;
	NSString* _state;
	NSString* _nonce;
	NSString* _requestedOperation;

}

@property (nonatomic,copy) NSArray * requestedScopes;                  //@synthesize requestedScopes=_requestedScopes - In the implementation block
@property (nonatomic,copy) NSString * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * nonce;                           //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * requestedOperation;              //@synthesize requestedOperation=_requestedOperation - In the implementation block
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setRequestedScopes:(NSArray *)arg1 ;
-(NSArray *)requestedScopes;
-(NSString *)requestedOperation;
-(void)setRequestedOperation:(NSString *)arg1 ;
@end

