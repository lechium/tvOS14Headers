/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPSQLKVStore : NSObject
+(id)loadBlobForKey:(id)arg1 transaction:(id)arg2 ;
+(void)storeBlob:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(void)removeBlobForKey:(id)arg1 transaction:(id)arg2 ;
+(void)setNumber:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(void)setString:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(id)numberForKey:(id)arg1 transaction:(id)arg2 ;
+(id)stringForKey:(id)arg1 transaction:(id)arg2 ;
@end

