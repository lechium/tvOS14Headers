/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSArray, NSUUID;

@interface ASDManifestRequest : NSObject <NSSecureCoding> {

	BOOL _pinningRevocationCheckRequired;
	NSDictionary* _manifest;
	NSURL* _manifestURL;
	long long _archiveType;
	NSArray* _certificates;
	NSUUID* _requestIdentifier;

}

@property (retain) NSDictionary * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (retain) NSURL * manifestURL;                              //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign) long long archiveType;                            //@synthesize archiveType=_archiveType - In the implementation block
@property (retain) NSArray * certificates;                           //@synthesize certificates=_certificates - In the implementation block
@property (assign) BOOL pinningRevocationCheckRequired;              //@synthesize pinningRevocationCheckRequired=_pinningRevocationCheckRequired - In the implementation block
@property (retain) NSUUID * requestIdentifier;                       //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(NSUUID *)requestIdentifier;
-(BOOL)pinningRevocationCheckRequired;
-(void)setPinningRevocationCheckRequired:(BOOL)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSDictionary *)manifest;
-(void)setManifest:(NSDictionary *)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(long long)archiveType;
-(void)setArchiveType:(long long)arg1 ;
@end
