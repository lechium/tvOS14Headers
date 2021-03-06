/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying> {

	NSData* _voucher;
	NSData* _voucherSignature;

}

@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) NSData * voucher;                        //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucherSignature; 
@property (nonatomic,retain) NSData * voucherSignature;               //@synthesize voucherSignature=_voucherSignature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)voucher;
-(void)setVoucher:(NSData *)arg1 ;
-(BOOL)hasVoucher;
-(BOOL)hasVoucherSignature;
-(NSData *)voucherSignature;
-(void)setVoucherSignature:(NSData *)arg1 ;
@end

