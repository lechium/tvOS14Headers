/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSSet;

@interface ACProtobufVariableValueList : PBCodable <NSCopying> {

	NSMutableArray* _values;

}

@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,copy) NSSet * set; 
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSSet *)set;
-(void)setArray:(NSArray *)arg1 ;
-(void)setSet:(NSSet *)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSMutableArray *)values;
-(NSArray *)array;
-(id)initWithSet:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addValue:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(id)_convertArray:(id)arg1 ;
@end
