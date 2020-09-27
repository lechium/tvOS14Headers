/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	unsigned long long _archiveBytesConsumed;
	unsigned long long _archiveSizeBytes;
	NSDictionary* _szOptions;
	NSString* _sandboxExtensionToken;

}

@property (assign,nonatomic) unsigned long long archiveBytesConsumed;              //@synthesize archiveBytesConsumed=_archiveBytesConsumed - In the implementation block
@property (assign,nonatomic) unsigned long long archiveSizeBytes;                  //@synthesize archiveSizeBytes=_archiveSizeBytes - In the implementation block
@property (nonatomic,copy) NSDictionary * szOptions;                               //@synthesize szOptions=_szOptions - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionToken;                       //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)archiveBytesConsumed;
-(unsigned long long)archiveSizeBytes;
-(NSDictionary *)szOptions;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(void)setArchiveSizeBytes:(unsigned long long)arg1 ;
-(void)setSzOptions:(NSDictionary *)arg1 ;
@end
