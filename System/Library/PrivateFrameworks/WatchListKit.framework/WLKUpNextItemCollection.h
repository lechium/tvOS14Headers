/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSArray;

@interface WLKUpNextItemCollection : NSObject {

	NSString* _title;
	NSDate* _timestamp;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)description;
-(NSDate *)timestamp;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
@end

