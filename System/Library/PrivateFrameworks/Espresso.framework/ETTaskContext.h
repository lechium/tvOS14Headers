/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ETTaskContext
@required
-(BOOL)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id*)arg3;
-(id)getTensorNamed:(id)arg1;
-(id)doInferenceOnData:(id)arg1 error:(id*)arg2;
-(BOOL)saveNetwork:(id)arg1 inplace:(BOOL)arg2 error:(id*)arg3;

@end

