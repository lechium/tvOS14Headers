/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QuerySection : NSObject {

	unsigned long long _sectionIndex;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 sectionIndex:(unsigned long long)arg2 ;
@end

