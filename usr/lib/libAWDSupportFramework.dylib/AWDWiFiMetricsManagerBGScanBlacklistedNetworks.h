/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _blacklistingHistorys;
	NSString* _interfaceName;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSMutableArray * blacklistingHistorys;              //@synthesize blacklistingHistorys=_blacklistingHistorys - In the implementation block
+(Class)blacklistingHistoryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)interfaceName;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasInterfaceName;
-(void)setBlacklistingHistorys:(NSMutableArray *)arg1 ;
-(void)addBlacklistingHistory:(id)arg1 ;
-(unsigned long long)blacklistingHistorysCount;
-(void)clearBlacklistingHistorys;
-(id)blacklistingHistoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)blacklistingHistorys;
@end
