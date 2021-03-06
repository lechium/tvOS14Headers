/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPhysicalCardOrder : NSObject <NSSecureCoding> {

	unsigned long long _reason;
	NSString* _nameOnCard;
	NSString* _artworkIdentifier;

}

@property (assign,nonatomic) unsigned long long reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                     //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(NSString *)artworkIdentifier;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
@end

