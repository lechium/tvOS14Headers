/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLRequest, AKAppleIDServerResourceLoadDelegate, NSArray;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding> {

	NSURLRequest* _request;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	unsigned long long _requestType;
	unsigned long long _presentationType;
	NSArray* _whitelistedPathURLs;

}

@property (nonatomic,retain) NSURLRequest * request;                                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AKAppleIDServerResourceLoadDelegate * resourceLoadDelegate;              //@synthesize resourceLoadDelegate=_resourceLoadDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long presentationType;                                     //@synthesize presentationType=_presentationType - In the implementation block
@property (nonatomic,copy) NSArray * whitelistedPathURLs;                                             //@synthesize whitelistedPathURLs=_whitelistedPathURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURLRequest *)request;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResourceLoadDelegate:(AKAppleIDServerResourceLoadDelegate *)arg1 ;
-(AKAppleIDServerResourceLoadDelegate *)resourceLoadDelegate;
-(id)initWithRequest:(id)arg1 requestType:(unsigned long long)arg2 ;
-(unsigned long long)presentationType;
-(void)setPresentationType:(unsigned long long)arg1 ;
-(NSArray *)whitelistedPathURLs;
-(void)setWhitelistedPathURLs:(NSArray *)arg1 ;
@end
