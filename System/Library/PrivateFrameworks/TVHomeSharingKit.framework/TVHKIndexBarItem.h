/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVHKIndexBarItem : NSObject {

	NSString* _title;
	unsigned long long _startIndex;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;                     //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
+(id)new;
+(id)indexBarItemWithDMAPEntity:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)title;
-(unsigned long long)startIndex;
-(id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end

