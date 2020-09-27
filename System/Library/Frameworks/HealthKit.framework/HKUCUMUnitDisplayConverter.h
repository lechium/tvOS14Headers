/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject {

	NSDictionary* _synonymLookupTable;
	NSDictionary* _hkUnitNameLookupTable;

}

@property (nonatomic,copy) NSDictionary * synonymLookupTable;                 //@synthesize synonymLookupTable=_synonymLookupTable - In the implementation block
@property (nonatomic,copy) NSDictionary * hkUnitNameLookupTable;              //@synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable - In the implementation block
+(id)sharedConverter;
-(id)init;
-(id)hkUnitNameForUCUMUnitCode:(id)arg1 ;
-(id)synonymForUCUMUnitString:(id)arg1 ;
-(void)setSynonymLookupTable:(NSDictionary *)arg1 ;
-(void)setHkUnitNameLookupTable:(NSDictionary *)arg1 ;
-(NSDictionary *)synonymLookupTable;
-(NSDictionary *)hkUnitNameLookupTable;
@end
