/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _values;
	SCD_Struct_Co16 _timeRange;

}

@property (readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) SCD_Struct_Co16 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) NSDictionary * values;                  //@synthesize values=_values - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)values;
-(NSString *)identifier;
-(SCD_Struct_Co16)timeRange;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(SCD_Struct_Co16)arg3 values:(id)arg4 ;
-(void)adjustDurationTo:(SCD_Struct_Fr12)arg1 ;
@end

