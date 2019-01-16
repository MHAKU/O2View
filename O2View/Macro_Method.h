//
//  Macro_Method.h
//  GSXG
//
//  Created by guoshangxinlian on 2018/11/13.
//  Copyright © 2018 guoshangxinlian. All rights reserved.
//

#ifndef Macro_Method_h
#define Macro_Method_h

//判断字符串是否为空修改为--
#define IFSTRINGNIL(v)                 (v = (v != nil) ? v : @"--")
//判断字符串是否为空
#define IFISNIL(v)                     (v = (v != nil) ? v : @"")
//判断NSNumber是否为空
#define IFISNILFORNUMBER(v)            (v = (v != nil) ? v : [NSNumber numberWithInt:0])
//判断是否是字符串
#define IFISSTR(v)                     (v = ([v isKindOfClass:[NSString class]]) ? v : [NSString stringWithFormat:@"%@",v])
//判断字段时候为空的情况
#define IFISNULLSTR(x)                 ([(x) isEqual:[NSNull null]]||(x)==nil)? @"":TEXT_STR(x)
//转换为字符串
#define TEXT_STR(x)                    [NSString stringWithFormat:@"%@",x]
//int转为字符串
#define INT_STR(num)                   [NSString stringWithFormat:@"%d",num]
//integer转为字符串
#define INTEGER_STR(num)               [NSString stringWithFormat:@"%ld",(long)num]
//float、double转为字符串
#define FLOAT_STR(num)                 [NSString stringWithFormat:@"%.2f",num]

#endif /* Macro_Method_h */
