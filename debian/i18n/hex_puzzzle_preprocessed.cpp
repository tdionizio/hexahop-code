# 1 "hex_puzzzle.cpp"
# 1 "/home/ari/hex-a-hop-0.0.20070315//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "hex_puzzzle.cpp"
# 19 "hex_puzzzle.cpp"
# 1 "i18n.h" 1
# 23 "i18n.h"
# 1 "/usr/include/libintl.h" 1 3 4
# 24 "/usr/include/libintl.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 330 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 348 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 349 "/usr/include/sys/cdefs.h" 2 3 4
# 331 "/usr/include/features.h" 2 3 4
# 354 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 355 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/libintl.h" 2 3 4
# 35 "/usr/include/libintl.h" 3 4
extern "C" {




extern char *gettext (__const char *__msgid)
     throw () __attribute__ ((__format_arg__ (1)));



extern char *dgettext (__const char *__domainname, __const char *__msgid)
     throw () __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (__const char *__domainname, __const char *__msgid)
     throw () __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (__const char *__domainname,
   __const char *__msgid, int __category)
     throw () __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (__const char *__domainname,
     __const char *__msgid, int __category)
     throw () __attribute__ ((__format_arg__ (2)));




extern char *ngettext (__const char *__msgid1, __const char *__msgid2,
         unsigned long int __n)
     throw () __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (__const char *__domainname, __const char *__msgid1,
   __const char *__msgid2, unsigned long int __n)
     throw () __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (__const char *__domainname, __const char *__msgid1,
    __const char *__msgid2, unsigned long int __n,
    int __category)
     throw () __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (__const char *__domainname) throw ();



extern char *bindtextdomain (__const char *__domainname,
        __const char *__dirname) throw ();



extern char *bind_textdomain_codeset (__const char *__domainname,
          __const char *__codeset) throw ();
# 122 "/usr/include/libintl.h" 3 4
}
# 24 "i18n.h" 2


class GetTextInit
{
 protected:
  static bool IsInit;
 public:
  GetTextInit();
  const char *GetEncoding() const;
};

static GetTextInit gettext_init;
# 20 "hex_puzzzle.cpp" 2
# 1 "/usr/include/c++/4.3/string" 1 3
# 43 "/usr/include/c++/4.3/string" 3
       
# 44 "/usr/include/c++/4.3/string" 3

# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 1 3
# 40 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/os_defines.h" 1 3
# 41 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/cpu_defines.h" 1 3
# 44 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 2 3
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 46 "/usr/include/c++/4.3/string" 2 3
# 1 "/usr/include/c++/4.3/bits/stringfwd.h" 1 3
# 42 "/usr/include/c++/4.3/bits/stringfwd.h" 3
       
# 43 "/usr/include/c++/4.3/bits/stringfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;


}
# 47 "/usr/include/c++/4.3/string" 2 3
# 1 "/usr/include/c++/4.3/bits/char_traits.h" 1 3
# 44 "/usr/include/c++/4.3/bits/char_traits.h" 3
       
# 45 "/usr/include/c++/4.3/bits/char_traits.h" 3

# 1 "/usr/include/c++/4.3/bits/stl_algobase.h" 1 3
# 66 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 49 "/usr/include/c++/4.3/cstddef" 2 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
# 67 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/functexcept.h" 1 3
# 42 "/usr/include/c++/4.3/bits/functexcept.h" 3
# 1 "/usr/include/c++/4.3/exception_defines.h" 1 3
# 43 "/usr/include/c++/4.3/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

}
# 68 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 1 3
# 41 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
       
# 42 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 406 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 69 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/ext/type_traits.h" 1 3
# 38 "/usr/include/c++/4.3/ext/type_traits.h" 3
       
# 39 "/usr/include/c++/4.3/ext/type_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 70 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/ext/numeric_traits.h" 1 3
# 38 "/usr/include/c++/4.3/ext/numeric_traits.h" 3
       
# 39 "/usr/include/c++/4.3/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 58 "/usr/include/c++/4.3/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 103 "/usr/include/c++/4.3/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 71 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/stl_pair.h" 1 3
# 65 "/usr/include/c++/4.3/bits/stl_pair.h" 3
# 1 "/usr/include/c++/4.3/bits/stl_move.h" 1 3
# 39 "/usr/include/c++/4.3/bits/stl_move.h" 3
# 1 "/usr/include/c++/4.3/bits/concept_check.h" 1 3
# 38 "/usr/include/c++/4.3/bits/concept_check.h" 3
       
# 39 "/usr/include/c++/4.3/bits/concept_check.h" 3
# 40 "/usr/include/c++/4.3/bits/stl_move.h" 2 3
# 70 "/usr/include/c++/4.3/bits/stl_move.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {







  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }

}
# 66 "/usr/include/c++/4.3/bits/stl_pair.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 103 "/usr/include/c++/4.3/bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 146 "/usr/include/c++/4.3/bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 216 "/usr/include/c++/4.3/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 262 "/usr/include/c++/4.3/bits/stl_pair.h" 3
}
# 72 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 1 3
# 68 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 3
       
# 69 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 3


# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 72 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 84 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag {};

  struct output_iterator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};


  struct bidirectional_iterator_tag : public forward_iterator_tag {};


  struct random_access_iterator_tag : public bidirectional_iterator_tag {};
# 108 "/usr/include/c++/4.3/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }

}
# 73 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/stl_iterator_base_funcs.h" 1 3
# 68 "/usr/include/c++/4.3/bits/stl_iterator_base_funcs.h" 3
       
# 69 "/usr/include/c++/4.3/bits/stl_iterator_base_funcs.h" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
# 113 "/usr/include/c++/4.3/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 171 "/usr/include/c++/4.3/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 74 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.3/bits/stl_iterator.h" 1 3
# 73 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 94 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
              difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

    public:






      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() - __x.base(); }
# 385 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 411 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 428 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 454 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 469 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 494 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 511 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 537 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 556 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 598 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 617 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 643 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }

}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 662 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 760 "/usr/include/c++/4.3/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 75 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/4.3/debug/debug.h" 1 3
# 52 "/usr/include/c++/4.3/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 77 "/usr/include/c++/4.3/bits/stl_algobase.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 119 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;


     

     

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 159 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 186 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 208 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 250 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator,
    bool _IsNormal = __is_normal_iterator<_Iterator>::__value>
    struct __niter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __niter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };


  template<typename _Iterator,
    bool _IsMove = __is_move_iterator<_Iterator>::__value>
    struct __miter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __miter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 332 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 370 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   __builtin_memmove(__result, __first,
       sizeof(_Tp) * (__last - __first));
   return __result + (__last - __first);
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>
   (std::__niter_base<_II>::__b(__first),
    std::__niter_base<_II>::__b(__last),
    std::__niter_base<_OI>::__b(__result)));
    }
# 454 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base<_II>::__b(__first),
        std::__miter_base<_II>::__b(__last), __result));
    }
# 506 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 534 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 564 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base<_BI1>::__b(__first),
     std::__niter_base<_BI1>::__b(__last),
     std::__niter_base<_BI2>::__b(__result)));
    }
# 622 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base<_BI1>::__b(__first),
        std::__miter_base<_BI1>::__b(__last), __result));
    }
# 679 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 722 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base<_ForwardIterator>::__b(__first),
      std::__niter_base<_ForwardIterator>::__b(__last), __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 776 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base<_OI>::__b(__first),
     __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 942 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base<_II1>::__b(__first1),
         std::__niter_base<_II1>::__b(__last1),
         std::__niter_base<_II2>::__b(__first2));
    }
# 973 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1003 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux
 (std::__niter_base<_II1>::__b(__first1),
  std::__niter_base<_II1>::__b(__last1),
  std::__niter_base<_II2>::__b(__first2),
  std::__niter_base<_II2>::__b(__last2));
    }
# 1037 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;


     
     
      ;
      ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1076 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1112 "/usr/include/c++/4.3/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 47 "/usr/include/c++/4.3/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.3/bits/postypes.h" 1 3
# 45 "/usr/include/c++/4.3/bits/postypes.h" 3
       
# 46 "/usr/include/c++/4.3/bits/postypes.h" 3

# 1 "/usr/include/c++/4.3/cwchar" 1 3
# 46 "/usr/include/c++/4.3/cwchar" 3
       
# 47 "/usr/include/c++/4.3/cwchar" 3


# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 50 "/usr/include/c++/4.3/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 37 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 38 "/usr/include/wchar.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 41 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 43 "/usr/include/wchar.h" 2 3 4
# 52 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 53 "/usr/include/wchar.h" 2 3 4
# 78 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 99 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;



# 124 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     throw ();


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     throw ();


extern int wcscmp (__const wchar_t *__s1, __const wchar_t *__s2)
     throw () __attribute__ ((__pure__));

extern int wcsncmp (__const wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));




extern int wcscasecmp (__const wchar_t *__s1, __const wchar_t *__s2) throw ();


extern int wcsncasecmp (__const wchar_t *__s1, __const wchar_t *__s2,
   size_t __n) throw ();



# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;
# 173 "/usr/include/wchar.h" 2 3 4

extern int wcscasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (__const wchar_t *__s1, __const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         __const wchar_t *__restrict __s2, size_t __n) throw ();








extern int wcscoll_l (__const wchar_t *__s1, __const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, __const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (__const wchar_t *__s) throw () __attribute__ ((__malloc__));




extern wchar_t *wcschr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __attribute__ ((__pure__));

extern wchar_t *wcsrchr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern wchar_t *wcschrnul (__const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (__const wchar_t *__wcs, __const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (__const wchar_t *__wcs, __const wchar_t *__accept)
     throw () __attribute__ ((__pure__));

extern wchar_t *wcspbrk (__const wchar_t *__wcs, __const wchar_t *__accept)
     throw () __attribute__ ((__pure__));

extern wchar_t *wcsstr (__const wchar_t *__haystack, __const wchar_t *__needle)
     throw () __attribute__ ((__pure__));


extern wchar_t *wcstok (wchar_t *__restrict __s,
   __const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (__const wchar_t *__s) throw () __attribute__ ((__pure__));




extern wchar_t *wcswcs (__const wchar_t *__haystack, __const wchar_t *__needle)
     throw () __attribute__ ((__pure__));




extern size_t wcsnlen (__const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));





extern wchar_t *wmemchr (__const wchar_t *__s, wchar_t __c, size_t __n)
     throw () __attribute__ ((__pure__));


extern int wmemcmp (__const wchar_t *__restrict __s1,
      __const wchar_t *__restrict __s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    __const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     __const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (__const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         __const char *__restrict __s, size_t __n,
         mbstate_t *__p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (__const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (__const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();








extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
btowc (int __c) throw ()
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
wctob (wint_t __wc) throw ()
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
mbrlen (__const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps) throw ()

{ return (__ps != __null
   ? mbrtowc (__null, __s, __n, __ps) : __mbrlen (__s, __n, __null)); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    __const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    __const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     __const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     __const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (__const wchar_t *__s, size_t __n) throw ();






extern double wcstod (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (__const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (__const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (__const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 477 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (__const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (__const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (__const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__dest, __const wchar_t *__src) throw ();



extern wchar_t *wcpncpy (wchar_t *__dest, __const wchar_t *__src, size_t __n)
     throw ();
# 527 "/usr/include/wchar.h" 3 4
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       __const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (__const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       __const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (__const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      __const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (__const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (__const wchar_t *__restrict __s,
      __const wchar_t *__restrict __format, ...)
     throw () ;
# 627 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (__const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (__const wchar_t *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 683 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (__const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 748 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 774 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 784 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (__const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   __const wchar_t *__restrict __format,
   __const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     __const wchar_t *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 831 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/wchar2.h" 1 3 4
# 25 "/usr/include/bits/wchar2.h" 3 4
extern wchar_t *__wmemcpy_chk (wchar_t *__restrict __s1,
          __const wchar_t *__restrict __s2, size_t __n,
          size_t __ns1) throw ();
extern wchar_t *__wmemcpy_alias (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmemcpy");



extern wchar_t *__wmemcpy_chk_warn (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemcpy_chk")



     __attribute__((__warning__ ("wmemcpy called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wmemcpy (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemcpy_chk (__s1, __s2, __n,
         __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemcpy_chk_warn (__s1, __s2, __n,
       __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemcpy_alias (__s1, __s2, __n);
}


extern wchar_t *__wmemmove_chk (wchar_t *__s1, __const wchar_t *__s2,
    size_t __n, size_t __ns1) throw ();
extern wchar_t *__wmemmove_alias (wchar_t *__s1, __const wchar_t *__s2, size_t __n) throw () __asm__ ("" "wmemmove");


extern wchar_t *__wmemmove_chk_warn (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemmove_chk")



     __attribute__((__warning__ ("wmemmove called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wmemmove (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemmove_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemmove_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemmove_alias (__s1, __s2, __n);
}



extern wchar_t *__wmempcpy_chk (wchar_t *__restrict __s1,
    __const wchar_t *__restrict __s2, size_t __n,
    size_t __ns1) throw ();
extern wchar_t *__wmempcpy_alias (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmempcpy");



extern wchar_t *__wmempcpy_chk_warn (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmempcpy_chk")



     __attribute__((__warning__ ("wmempcpy called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wmempcpy (wchar_t *__restrict __s1, __const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmempcpy_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmempcpy_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmempcpy_alias (__s1, __s2, __n);
}



extern wchar_t *__wmemset_chk (wchar_t *__s, wchar_t __c, size_t __n,
          size_t __ns) throw ();
extern wchar_t *__wmemset_alias (wchar_t *__s, wchar_t __c, size_t __n) throw () __asm__ ("" "wmemset");

extern wchar_t *__wmemset_chk_warn (wchar_t *__s, wchar_t __c, size_t __n, size_t __ns) throw () __asm__ ("" "__wmemset_chk")


     __attribute__((__warning__ ("wmemset called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wmemset (wchar_t *__restrict __s, wchar_t __c, size_t __n) throw ()
{
  if (__builtin_object_size (__s, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemset_chk (__s, __c, __n, __builtin_object_size (__s, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s, 0) / sizeof (wchar_t))
 return __wmemset_chk_warn (__s, __c, __n,
       __builtin_object_size (__s, 0) / sizeof (wchar_t));
    }
  return __wmemset_alias (__s, __c, __n);
}


extern wchar_t *__wcscpy_chk (wchar_t *__restrict __dest,
         __const wchar_t *__restrict __src,
         size_t __n) throw ();
extern wchar_t *__wcscpy_alias (wchar_t *__restrict __dest, __const wchar_t *__restrict __src) throw () __asm__ ("" "wcscpy");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcscpy (wchar_t *__dest, __const wchar_t *__src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscpy_alias (__dest, __src);
}


extern wchar_t *__wcpcpy_chk (wchar_t *__dest, __const wchar_t *__src,
         size_t __destlen) throw ();
extern wchar_t *__wcpcpy_alias (wchar_t *__dest, __const wchar_t *__src) throw () __asm__ ("" "wcpcpy");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcpcpy (wchar_t *__dest, __const wchar_t *__src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcpcpy_alias (__dest, __src);
}


extern wchar_t *__wcsncpy_chk (wchar_t *__restrict __dest,
          __const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcsncpy_alias (wchar_t *__restrict __dest, __const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncpy");



extern wchar_t *__wcsncpy_chk_warn (wchar_t *__restrict __dest, __const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcsncpy_chk")



     __attribute__((__warning__ ("wcsncpy called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcsncpy (wchar_t *__dest, __const wchar_t *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcsncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcsncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcsncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcpncpy_chk (wchar_t *__restrict __dest,
          __const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcpncpy_alias (wchar_t *__restrict __dest, __const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcpncpy");



extern wchar_t *__wcpncpy_chk_warn (wchar_t *__restrict __dest, __const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcpncpy_chk")



     __attribute__((__warning__ ("wcpncpy called with length bigger than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcpncpy (wchar_t *__dest, __const wchar_t *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcpncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcpncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcpncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcscat_chk (wchar_t *__restrict __dest,
         __const wchar_t *__restrict __src,
         size_t __destlen) throw ();
extern wchar_t *__wcscat_alias (wchar_t *__restrict __dest, __const wchar_t *__restrict __src) throw () __asm__ ("" "wcscat");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcscat (wchar_t *__dest, __const wchar_t *__src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscat_alias (__dest, __src);
}


extern wchar_t *__wcsncat_chk (wchar_t *__restrict __dest,
          __const wchar_t *__restrict __src,
          size_t __n, size_t __destlen) throw ();
extern wchar_t *__wcsncat_alias (wchar_t *__restrict __dest, __const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncat");




extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) wchar_t *
wcsncat (wchar_t *__dest, __const wchar_t *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcsncat_chk (__dest, __src, __n,
     __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcsncat_alias (__dest, __src, __n);
}


extern int __swprintf_chk (wchar_t *__restrict __s, size_t __n,
      int __flag, size_t __s_len,
      __const wchar_t *__restrict __format, ...)
     throw () ;

extern int __swprintf_alias (wchar_t *__restrict __s, size_t __n, __const wchar_t *__restrict __fmt, ...) throw () __asm__ ("" "swprintf");





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
swprintf (wchar_t *__restrict __s, size_t __n, __const wchar_t *__restrict __fmt, ...) throw ()

{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 || 2 > 1)
    return __swprintf_chk (__s, __n, 2 - 1,
      __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
      __fmt, __builtin_va_arg_pack ());
  return __swprintf_alias (__s, __n, __fmt, __builtin_va_arg_pack ());
}
# 302 "/usr/include/bits/wchar2.h" 3 4
extern int __vswprintf_chk (wchar_t *__restrict __s, size_t __n,
       int __flag, size_t __s_len,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;

extern int __vswprintf_alias (wchar_t *__restrict __s, size_t __n, __const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw () __asm__ ("" "vswprintf");




extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vswprintf (wchar_t *__restrict __s, size_t __n, __const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 || 2 > 1)
    return __vswprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t), __fmt, __ap);
  return __vswprintf_alias (__s, __n, __fmt, __ap);
}




extern int __fwprintf_chk (__FILE *__restrict __stream, int __flag,
      __const wchar_t *__restrict __format, ...);
extern int __wprintf_chk (int __flag, __const wchar_t *__restrict __format,
     ...);
extern int __vfwprintf_chk (__FILE *__restrict __stream, int __flag,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __ap);
extern int __vwprintf_chk (int __flag, __const wchar_t *__restrict __format,
      __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
wprintf (__const wchar_t *__restrict __fmt, ...)
{
  return __wprintf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
fwprintf (__FILE *__restrict __stream, __const wchar_t *__restrict __fmt, ...)
{
  return __fwprintf_chk (__stream, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vwprintf (__const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vwprintf_chk (2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vfwprintf (__FILE *__restrict __stream,
    __const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfwprintf_chk (__stream, 2 - 1, __fmt, __ap);
}



extern wchar_t *__fgetws_chk (wchar_t *__restrict __s, size_t __size, int __n,
         __FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws") __attribute__ ((__warn_unused_result__));


extern wchar_t *__fgetws_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgetws called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
      __n, __stream);
    }
  return __fgetws_alias (__s, __n, __stream);
}


extern wchar_t *__fgetws_unlocked_chk (wchar_t *__restrict __s, size_t __size,
           int __n, __FILE *__restrict __stream)
  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws_unlocked")


  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_unlocked_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgetws_unlocked called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws_unlocked (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
          __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);
    }
  return __fgetws_unlocked_alias (__s, __n, __stream);
}



extern size_t __wcrtomb_chk (char *__s, wchar_t __wchar, mbstate_t *__p,
     size_t __buflen) throw () __attribute__ ((__warn_unused_result__));
extern size_t __wcrtomb_alias (char *__restrict __s, wchar_t __wchar, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcrtomb") __attribute__ ((__warn_unused_result__));



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) size_t
wcrtomb (char *__s, wchar_t __wchar, mbstate_t *__ps) throw ()
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wcrtomb_chk (__s, __wchar, __ps, __builtin_object_size (__s, 2 > 1));
  return __wcrtomb_alias (__s, __wchar, __ps);
}


extern size_t __mbsrtowcs_chk (wchar_t *__restrict __dst,
          __const char **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __mbsrtowcs_alias (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsrtowcs");




extern size_t __mbsrtowcs_chk_warn (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsrtowcs_chk")




     __attribute__((__warning__ ("mbsrtowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
mbsrtowcs (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsrtowcs_chk (__dst, __src, __len, __ps,
    __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsrtowcs_chk_warn (__dst, __src, __len, __ps,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsrtowcs_alias (__dst, __src, __len, __ps);
}


extern size_t __wcsrtombs_chk (char *__restrict __dst,
          __const wchar_t **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __wcsrtombs_alias (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsrtombs");




extern size_t __wcsrtombs_chk_warn (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsrtombs_chk")




    __attribute__((__warning__ ("wcsrtombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
wcsrtombs (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsrtombs_chk (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsrtombs_chk_warn (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsrtombs_alias (__dst, __src, __len, __ps);
}



extern size_t __mbsnrtowcs_chk (wchar_t *__restrict __dst,
    __const char **__restrict __src, size_t __nmc,
    size_t __len, mbstate_t *__restrict __ps,
    size_t __dstlen) throw ();
extern size_t __mbsnrtowcs_alias (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsnrtowcs");




extern size_t __mbsnrtowcs_chk_warn (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsnrtowcs_chk")




     __attribute__((__warning__ ("mbsnrtowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
mbsnrtowcs (wchar_t *__restrict __dst, __const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsnrtowcs_chk (__dst, __src, __nmc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsnrtowcs_chk_warn (__dst, __src, __nmc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsnrtowcs_alias (__dst, __src, __nmc, __len, __ps);
}


extern size_t __wcsnrtombs_chk (char *__restrict __dst,
    __const wchar_t **__restrict __src,
    size_t __nwc, size_t __len,
    mbstate_t *__restrict __ps, size_t __dstlen)
     throw ();
extern size_t __wcsnrtombs_alias (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsnrtombs");




extern size_t __wcsnrtombs_chk_warn (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsnrtombs_chk")





     __attribute__((__warning__ ("wcsnrtombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
wcsnrtombs (char *__restrict __dst, __const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsnrtombs_chk (__dst, __src, __nwc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsnrtombs_chk_warn (__dst, __src, __nwc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsnrtombs_alias (__dst, __src, __nwc, __len, __ps);
}
# 832 "/usr/include/wchar.h" 2 3 4






}
# 53 "/usr/include/c++/4.3/cwchar" 2 3
# 70 "/usr/include/c++/4.3/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::mbstate_t;

}
# 144 "/usr/include/c++/4.3/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;
  using ::swprintf;
  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;

  using ::vswprintf;

  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;

  using ::wcschr;

  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  using ::wcspbrk;

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  using ::wcsrchr;

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  using ::wcsstr;

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  using ::wmemchr;

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }

}







namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  using ::wcstold;
# 262 "/usr/include/c++/4.3/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 48 "/usr/include/c++/4.3/bits/postypes.h" 2 3


# 1 "/usr/include/stdint.h" 1 3 4
# 28 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 51 "/usr/include/c++/4.3/bits/postypes.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {
# 71 "/usr/include/c++/4.3/bits/postypes.h" 3
  typedef int64_t streamoff;





  typedef ptrdiff_t streamsize;
# 90 "/usr/include/c++/4.3/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 112 "/usr/include/c++/4.3/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;

}
# 48 "/usr/include/c++/4.3/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.3/cstdio" 1 3
# 46 "/usr/include/c++/4.3/cstdio" 3
       
# 47 "/usr/include/c++/4.3/cstdio" 3


# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 50 "/usr/include/c++/4.3/cstdio" 2 3
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 1 3 4
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 488 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 550 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();








extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 182 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) throw () __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) throw () __attribute__ ((__warn_unused_result__));
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 229 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 272 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, __const char *__modes) throw () __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () __attribute__ ((__warn_unused_result__));


extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () __attribute__ ((__warn_unused_result__));






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));







extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (__const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 441 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 500 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 528 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 539 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 572 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));






extern char *gets (char *__s) __attribute__ ((__warn_unused_result__));

# 618 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 634 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) __attribute__ ((__warn_unused_result__));

# 695 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 706 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 742 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 761 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 784 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 823 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
# 842 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) throw ();
# 903 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 44 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 904 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/stdio2.h" 1 3 4
# 24 "/usr/include/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     __const char *__restrict __format, ...) throw ();
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      __const char *__restrict __format,
      __gnuc_va_list __ap) throw ();


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
sprintf (char *__restrict __s, __const char *__restrict __fmt, ...) throw ()
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vsprintf (char *__restrict __s, __const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, __const char *__restrict __format,
      ...) throw ();
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, __const char *__restrict __format,
       __gnuc_va_list __ap) throw ();


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
snprintf (char *__restrict __s, size_t __n, __const char *__restrict __fmt, ...) throw ()

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vsnprintf (char *__restrict __s, size_t __n, __const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     __const char *__restrict __format, ...);
extern int __printf_chk (int __flag, __const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      __const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, __const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
fprintf (FILE *__restrict __stream, __const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
printf (__const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vfprintf (FILE *__restrict __stream,
   __const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}



extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       __const char *__restrict __fmt, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __dprintf_chk (int __fd, int __flag, __const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      __const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, __const char *__restrict __format,
     ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      __const char *__restrict __format,
      __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
asprintf (char **__restrict __ptr, __const char *__restrict __fmt, ...) throw ()
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
__asprintf (char **__restrict __ptr, __const char *__restrict __fmt, ...) throw ()

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
dprintf (int __fd, __const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
obstack_printf (struct obstack *__restrict __obstack, __const char *__restrict __fmt, ...) throw ()

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 195 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vasprintf (char **__restrict __ptr, __const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
vdprintf (int __fd, __const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
obstack_vprintf (struct obstack *__restrict __obstack, __const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}





extern char *__gets_chk (char *__str, size_t) __attribute__ ((__warn_unused_result__));
extern char *__gets_warn (char *__str) __asm__ ("" "gets")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use fgets or getline instead, gets can't " "specify buffer size")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) char *
gets (char *__str)
{
  if (__builtin_object_size (__str, 2 > 1) != (size_t) -1)
    return __gets_chk (__str, __builtin_object_size (__str, 2 > 1));
  return __gets_warn (__str);
}

extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets") __attribute__ ((__warn_unused_result__));


extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread") __attribute__ ((__warn_unused_result__));



extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked") __attribute__ ((__warn_unused_result__));


extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked") __attribute__ ((__warn_unused_result__));



extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 907 "/usr/include/stdio.h" 2 3 4





}
# 51 "/usr/include/c++/4.3/cstdio" 2 3
# 98 "/usr/include/c++/4.3/cstdio" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;

}
# 155 "/usr/include/c++/4.3/cstdio" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 170 "/usr/include/c++/4.3/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;

}
# 49 "/usr/include/c++/4.3/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.3/cwchar" 1 3
# 46 "/usr/include/c++/4.3/cwchar" 3
       
# 47 "/usr/include/c++/4.3/cwchar" 3


# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 50 "/usr/include/c++/4.3/cwchar" 2 3
# 50 "/usr/include/c++/4.3/bits/char_traits.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 63 "/usr/include/c++/4.3/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "/usr/include/c++/4.3/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 229 "/usr/include/c++/4.3/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof() { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c) { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c) { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof() { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 48 "/usr/include/c++/4.3/string" 2 3
# 1 "/usr/include/c++/4.3/bits/allocator.h" 1 3
# 53 "/usr/include/c++/4.3/bits/allocator.h" 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++allocator.h" 1 3
# 39 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++allocator.h" 3
# 1 "/usr/include/c++/4.3/ext/new_allocator.h" 1 3
# 37 "/usr/include/c++/4.3/ext/new_allocator.h" 3
# 1 "/usr/include/c++/4.3/new" 1 3
# 44 "/usr/include/c++/4.3/new" 3
# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 45 "/usr/include/c++/4.3/new" 2 3
# 1 "/usr/include/c++/4.3/exception" 1 3
# 40 "/usr/include/c++/4.3/exception" 3
#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 56 "/usr/include/c++/4.3/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 112 "/usr/include/c++/4.3/exception" 3
  bool uncaught_exception() throw();
}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 127 "/usr/include/c++/4.3/exception" 3
  void __verbose_terminate_handler ();

}

}

#pragma GCC visibility pop
# 46 "/usr/include/c++/4.3/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{





  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 95 "/usr/include/c++/4.3/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 38 "/usr/include/c++/4.3/ext/new_allocator.h" 2 3



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using std::size_t;
  using std::ptrdiff_t;
# 53 "/usr/include/c++/4.3/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__builtin_expect(__n > this->max_size(), false))
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 117 "/usr/include/c++/4.3/ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 40 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++allocator.h" 2 3
# 54 "/usr/include/c++/4.3/bits/allocator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };







  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };

}
# 49 "/usr/include/c++/4.3/string" 2 3

# 1 "/usr/include/c++/4.3/bits/localefwd.h" 1 3
# 44 "/usr/include/c++/4.3/bits/localefwd.h" 3
       
# 45 "/usr/include/c++/4.3/bits/localefwd.h" 3


# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 1 3
# 45 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 3
       
# 46 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 3

# 1 "/usr/include/c++/4.3/clocale" 1 3
# 45 "/usr/include/c++/4.3/clocale" 3
       
# 46 "/usr/include/c++/4.3/clocale" 3


# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 27 "/usr/include/bits/locale.h" 3 4
enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};
# 31 "/usr/include/locale.h" 2 3 4

extern "C" {
# 51 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 121 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, __const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();


# 148 "/usr/include/locale.h" 3 4
typedef __locale_t locale_t;





extern __locale_t newlocale (int __category_mask, __const char *__locale,
        __locale_t __base) throw ();
# 189 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 49 "/usr/include/c++/4.3/clocale" 2 3
# 57 "/usr/include/c++/4.3/clocale" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 48 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 2 3
# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 49 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  extern "C" __typeof(uselocale) __uselocale;

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 90 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }

}
# 48 "/usr/include/c++/4.3/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.3/iosfwd" 1 3
# 43 "/usr/include/c++/4.3/iosfwd" 3
       
# 44 "/usr/include/c++/4.3/iosfwd" 3





namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  class ios_base;
# 132 "/usr/include/c++/4.3/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 49 "/usr/include/c++/4.3/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.3/cctype" 1 3
# 46 "/usr/include/c++/4.3/cctype" 3
       
# 47 "/usr/include/c++/4.3/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4
extern "C" {
# 41 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 42 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 323 "/usr/include/ctype.h" 3 4
}
# 50 "/usr/include/c++/4.3/cctype" 2 3
# 69 "/usr/include/c++/4.3/cctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 50 "/usr/include/c++/4.3/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 51 "/usr/include/c++/4.3/string" 2 3
# 1 "/usr/include/c++/4.3/bits/ostream_insert.h" 1 3
# 38 "/usr/include/c++/4.3/bits/ostream_insert.h" 3
       
# 39 "/usr/include/c++/4.3/bits/ostream_insert.h" 3


# 1 "/usr/include/c++/4.3/cxxabi-forced.h" 1 3
# 34 "/usr/include/c++/4.3/cxxabi-forced.h" 3
#pragma GCC visibility push(default)


namespace __cxxabiv1
{


  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();
    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 42 "/usr/include/c++/4.3/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 52 "/usr/include/c++/4.3/string" 2 3



# 1 "/usr/include/c++/4.3/bits/stl_function.h" 1 3
# 65 "/usr/include/c++/4.3/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 102 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 136 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 260 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 341 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 410 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 515 "/usr/include/c++/4.3/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}


# 1 "/usr/include/c++/4.3/backward/binders.h" 1 3
# 65 "/usr/include/c++/4.3/backward/binders.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 99 "/usr/include/c++/4.3/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 705 "/usr/include/c++/4.3/bits/stl_function.h" 2 3
# 56 "/usr/include/c++/4.3/string" 2 3


# 1 "/usr/include/c++/4.3/bits/basic_string.h" 1 3
# 44 "/usr/include/c++/4.3/bits/basic_string.h" 3
       
# 45 "/usr/include/c++/4.3/bits/basic_string.h" 3

# 1 "/usr/include/c++/4.3/ext/atomicity.h" 1 3
# 39 "/usr/include/c++/4.3/ext/atomicity.h" 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr.h" 1 3
# 33 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 132 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr.h" 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 1 3
# 43 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 25 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 29 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 30 "/usr/include/sched.h" 2 3 4


# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 33 "/usr/include/sched.h" 2 3 4


# 1 "/usr/include/bits/sched.h" 1 3 4
# 71 "/usr/include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


}







struct __sched_param
  {
    int __sched_priority;
  };
# 113 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 191 "/usr/include/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 36 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, __const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          __const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 110 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         __const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 26 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 59 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 132 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;








extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();

extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();
# 312 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 327 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 389 "/usr/include/time.h" 3 4
extern int getdate_err;
# 398 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 412 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 27 "/usr/include/pthread.h" 2 3 4


# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4
extern "C" {

# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/signal.h" 2 3 4
# 50 "/usr/include/signal.h" 3 4
typedef __sigset_t sigset_t;
# 402 "/usr/include/signal.h" 3 4
}
# 30 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 31 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 32 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 33 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED_NP,
  PTHREAD_MUTEX_ROBUST_NP
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 115 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 147 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 182 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 220 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      __const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     __const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ();







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (__const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (__const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (__const pthread_attr_t *__restrict
           __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           __const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (__const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (__const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (__const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (__const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (__const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (__const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     __const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (__const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      __const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       __const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 466 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 478 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 512 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 714 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          __const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
                                    __const struct timespec *__restrict
                                    __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_mutex_getprioceiling (__const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (__const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (__const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprotocol (__const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (__const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_mutexattr_getrobust_np (__const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 848 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    __const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         __const pthread_condattr_t *__restrict
         __cond_attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 960 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __const struct timespec *__restrict
       __abstime) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (__const pthread_condattr_t *
                                        __restrict __attr,
                                        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
                                        int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (__const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1004 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     __const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (__const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
                                           int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1071 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    __const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1105 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();




extern __inline __attribute__ ((__gnu_inline__)) int
pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ()
{
  return __thread1 == __thread2;
}


}
# 44 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 2 3
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 173 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 174 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 178 "/usr/include/unistd.h" 2 3 4
# 191 "/usr/include/unistd.h" 3 4
typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 198 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;
# 245 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 258 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 301 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 312 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, __const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 343 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__));






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__));
# 371 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__));


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__));







extern int pipe (int __pipedes[2]) throw () __attribute__ ((__warn_unused_result__));
# 393 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 405 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 429 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () __attribute__ ((__warn_unused_result__));




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) throw () __attribute__ ((__warn_unused_result__));
# 471 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () __attribute__ ((__warn_unused_result__));





extern char *get_current_dir_name (void) throw ();






extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) throw () __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) throw ();


extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw ();




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1)));




extern int nice (int __inc) throw () __attribute__ ((__warn_unused_result__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS

  };
# 555 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 591 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 617 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 634 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () __attribute__ ((__warn_unused_result__));



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();






extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 837 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 171 "/usr/include/getopt.h" 3 4
}
# 838 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) throw () __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () __attribute__ ((__warn_unused_result__));






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 923 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) throw ();




extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();




extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 960 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 970 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () __attribute__ ((__warn_unused_result__));
# 980 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () __attribute__ ((__warn_unused_result__));
# 990 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) throw ();
# 1011 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1034 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1044 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
# 1065 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();





# 1 "/usr/include/bits/unistd.h" 1 3 4
# 24 "/usr/include/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read") __attribute__ ((__warn_unused_result__));

extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}


extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread") __attribute__ ((__warn_unused_result__));


extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64") __attribute__ ((__warn_unused_result__));


extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread called with bigger length than size of " "the destination buffer")));

extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread64 called with bigger length than size of " "the destination buffer")));



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread_chk_warn (__fd, __buf, __nbytes, __offset,
     __builtin_object_size (__buf, 0));
    }
  return __pread_alias (__fd, __buf, __nbytes, __offset);
}
# 105 "/usr/include/bits/unistd.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
       __builtin_object_size (__buf, 0));
    }

  return __pread64_alias (__fd, __buf, __nbytes, __offset);
}




extern ssize_t __readlink_chk (__const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (__const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlink")


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (__const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlink_chk")



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
readlink (__const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, __const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlinkat")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlinkat_chk")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")));



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
readlinkat (int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     throw () __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) throw () __asm__ ("" "getcwd") __attribute__ ((__warn_unused_result__));

extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) throw () __asm__ ("" "__getcwd_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) char *
getcwd (char *__buf, size_t __size) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) throw () __asm__ ("" "getwd")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
getwd (char *__buf) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) throw ();
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) throw () __asm__ ("" "confstr");

extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__confstr_chk")


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
confstr (int __name, char *__buf, size_t __len) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     throw () __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) throw () __asm__ ("" "getgroups") __attribute__ ((__warn_unused_result__));

extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) throw () __asm__ ("" "__getgroups_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
getgroups (int __size, __gid_t __list[]) throw ()
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ttyname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ttyname_r_chk")


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
ttyname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r") __attribute__ ((__nonnull__ (1)));

extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "gethostname") __attribute__ ((__nonnull__ (1)));

extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__gethostname_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
gethostname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "getdomainname") __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));


extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__getdomainname_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")));



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
getdomainname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1101 "/usr/include/unistd.h" 2 3 4


}
# 45 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 2 3

typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
# 100 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));
static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));
static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));
static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));


static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 211 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw_pthread_cancel;
  return __gthread_active_ptr != 0;
}
# 649 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_once (__gthread_once_t *once, void (*func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (once, func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *key, void (*dtor) (void *))
{
  return __gthrw_pthread_key_create (key, dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t key)
{
  return __gthrw_pthread_key_delete (key);
}

static inline void *
__gthread_getspecific (__gthread_key_t key)
{
  return __gthrw_pthread_getspecific (key);
}

static inline int
__gthread_setspecific (__gthread_key_t key, const void *ptr)
{
  return __gthrw_pthread_setspecific (key, ptr);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (mutex);
  else
    return 0;
}
# 731 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *mutex)
{
  return __gthread_mutex_lock (mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *mutex)
{
  return __gthread_mutex_trylock (mutex);
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *mutex)
{
  return __gthread_mutex_unlock (mutex);
}

static inline int
__gthread_cond_broadcast (__gthread_cond_t *cond)
{
  return __gthrw_pthread_cond_broadcast (cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *cond, __gthread_mutex_t *mutex)
{
  return __gthrw_pthread_cond_wait (cond, mutex);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *cond,
          __gthread_recursive_mutex_t *mutex)
{
  return __gthread_cond_wait (cond, mutex);
}
# 133 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/gthr.h" 2 3







#pragma GCC visibility pop
# 40 "/usr/include/c++/4.3/ext/atomicity.h" 2 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/atomic_word.h" 1 3
# 37 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 41 "/usr/include/c++/4.3/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 66 "/usr/include/c++/4.3/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 47 "/usr/include/c++/4.3/bits/basic_string.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {
# 108 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 145 "/usr/include/c++/4.3/bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 170 "/usr/include/c++/4.3/bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {
   this->_M_set_sharable();
   this->_M_length = __n;
   traits_type::assign(this->_M_refdata()[__n], _S_terminal);


 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      inline
      basic_string();




      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 464 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());







      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 519 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }






      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }

    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 630 "/usr/include/c++/4.3/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 643 "/usr/include/c++/4.3/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }





      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 672 "/usr/include/c++/4.3/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }




      bool
      empty() const
      { return this->size() == 0; }
# 700 "/usr/include/c++/4.3/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
# 717 "/usr/include/c++/4.3/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

 ;

 ;
 _M_leak();
 return _M_data()[__pos];
      }
# 738 "/usr/include/c++/4.3/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 757 "/usr/include/c++/4.3/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }






      basic_string&
      append(const basic_string& __str);
# 817 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
 ;
 return this->append(__s, traits_type::length(__s));
      }
# 849 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 860 "/usr/include/c++/4.3/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 899 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 915 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 927 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return this->assign(__s, traits_type::length(__s));
      }
# 943 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 955 "/usr/include/c++/4.3/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 972 "/usr/include/c++/4.3/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 987 "/usr/include/c++/4.3/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1003 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1025 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1048 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1066 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1089 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1106 "/usr/include/c++/4.3/bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1130 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1146 "/usr/include/c++/4.3/bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {
 ;

 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1166 "/usr/include/c++/4.3/bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last)
      {
 ;

        const size_type __pos = __first - _M_ibegin();
 _M_mutate(__pos, __last - __first, size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1193 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1215 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1239 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1258 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1281 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1299 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1317 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {
 ;

 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1338 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1359 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {
 ;

 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1381 "/usr/include/c++/4.3/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
   ;

   ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct(static_cast<size_type>(__beg), __end, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1513 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1523 "/usr/include/c++/4.3/bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1533 "/usr/include/c++/4.3/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1565 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1578 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1592 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1609 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1622 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1637 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1650 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1667 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1680 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1695 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1708 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1727 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1741 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1756 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1769 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1788 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1802 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 1817 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 1831 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 1848 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 1861 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 1877 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 1890 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 1907 "/usr/include/c++/4.3/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 1922 "/usr/include/c++/4.3/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 1940 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 1970 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 1994 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2012 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2035 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2060 "/usr/include/c++/4.3/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()

    : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }
# 2081 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2152 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2198 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2235 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2272 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2309 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2346 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2383 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2400 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2418 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2441 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2458 "/usr/include/c++/4.3/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 59 "/usr/include/c++/4.3/string" 2 3


# 1 "/usr/include/c++/4.3/bits/basic_string.tcc" 1 3
# 47 "/usr/include/c++/4.3/bits/basic_string.tcc" 3
       
# 48 "/usr/include/c++/4.3/bits/basic_string.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 try
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 if (__builtin_expect(__gnu_cxx::__is_null_pointer(__beg)
        && __beg != __end, 0))
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 try
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {

      if (__n == 0 && __a == _Alloc())
 return _S_empty_rep()._M_refdata();


      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
      ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
      ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
       ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
       ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {

      if (_M_rep() == &_S_empty_rep())
 return;

      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 552 "/usr/include/c++/4.3/bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 62 "/usr/include/c++/4.3/string" 2 3
# 21 "hex_puzzzle.cpp" 2
# 1 "/usr/include/c++/4.3/iostream" 1 3
# 42 "/usr/include/c++/4.3/iostream" 3
       
# 43 "/usr/include/c++/4.3/iostream" 3


# 1 "/usr/include/c++/4.3/ostream" 1 3
# 43 "/usr/include/c++/4.3/ostream" 3
       
# 44 "/usr/include/c++/4.3/ostream" 3

# 1 "/usr/include/c++/4.3/ios" 1 3
# 42 "/usr/include/c++/4.3/ios" 3
       
# 43 "/usr/include/c++/4.3/ios" 3





# 1 "/usr/include/c++/4.3/bits/ios_base.h" 1 3
# 44 "/usr/include/c++/4.3/bits/ios_base.h" 3
       
# 45 "/usr/include/c++/4.3/bits/ios_base.h" 3



# 1 "/usr/include/c++/4.3/bits/locale_classes.h" 1 3
# 44 "/usr/include/c++/4.3/bits/locale_classes.h" 3
       
# 45 "/usr/include/c++/4.3/bits/locale_classes.h" 3





namespace std __attribute__ ((__visibility__ ("default"))) {
# 66 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 102 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 121 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    locale() throw();
# 130 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 140 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 155 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 168 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 180 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 194 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 209 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 228 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw ();







    bool
    operator!=(const locale& __other) const throw ()
    { return !(this->operator==(__other)); }
# 256 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 272 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 307 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 6 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 340 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 371 "/usr/include/c++/4.3/bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc);

    static void
    _S_destroy_c_locale(__c_locale& __cloc);



    static __c_locale
    _S_get_c_locale();

    static const char*
    _S_get_c_name();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw ();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const;
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "/usr/include/c++/4.3/bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const;

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const;

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "/usr/include/c++/4.3/bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const;

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const;


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const;

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const;



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}


# 1 "/usr/include/c++/4.3/bits/locale_classes.tcc" 1 3
# 42 "/usr/include/c++/4.3/bits/locale_classes.tcc" 3
       
# 43 "/usr/include/c++/4.3/bits/locale_classes.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      try
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   throw;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      try
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      catch(...)
 {
   delete [] __c;
   throw;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "/usr/include/c++/4.3/bits/locale_classes.h" 2 3
# 49 "/usr/include/c++/4.3/bits/ios_base.h" 2 3
# 1 "/usr/include/c++/4.3/cstdio" 1 3
# 46 "/usr/include/c++/4.3/cstdio" 3
       
# 47 "/usr/include/c++/4.3/cstdio" 3


# 1 "/usr/include/c++/4.3/cstddef" 1 3
# 45 "/usr/include/c++/4.3/cstddef" 3
       
# 46 "/usr/include/c++/4.3/cstddef" 3


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 49 "/usr/include/c++/4.3/cstddef" 2 3
# 50 "/usr/include/c++/4.3/cstdio" 2 3
# 50 "/usr/include/c++/4.3/bits/ios_base.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 203 "/usr/include/c++/4.3/bits/ios_base.h" 3
  class ios_base
  {
  public:



    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 255 "/usr/include/c++/4.3/bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 330 "/usr/include/c++/4.3/bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 361 "/usr/include/c++/4.3/bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;





    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 394 "/usr/include/c++/4.3/bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 420 "/usr/include/c++/4.3/bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 437 "/usr/include/c++/4.3/bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 449 "/usr/include/c++/4.3/bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:




    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;




    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void);


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 558 "/usr/include/c++/4.3/bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 574 "/usr/include/c++/4.3/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 591 "/usr/include/c++/4.3/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 617 "/usr/include/c++/4.3/bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 668 "/usr/include/c++/4.3/bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 680 "/usr/include/c++/4.3/bits/ios_base.h" 3
    locale
    imbue(const locale& __loc);
# 691 "/usr/include/c++/4.3/bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 702 "/usr/include/c++/4.3/bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 721 "/usr/include/c++/4.3/bits/ios_base.h" 3
    static int
    xalloc() throw();
# 737 "/usr/include/c++/4.3/bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 758 "/usr/include/c++/4.3/bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 775 "/usr/include/c++/4.3/bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 49 "/usr/include/c++/4.3/ios" 2 3
# 1 "/usr/include/c++/4.3/streambuf" 1 3
# 42 "/usr/include/c++/4.3/streambuf" 3
       
# 43 "/usr/include/c++/4.3/streambuf" 3
# 51 "/usr/include/c++/4.3/streambuf" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 118 "/usr/include/c++/4.3/streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 184 "/usr/include/c++/4.3/streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 208 "/usr/include/c++/4.3/streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 225 "/usr/include/c++/4.3/streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 238 "/usr/include/c++/4.3/streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 265 "/usr/include/c++/4.3/streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 279 "/usr/include/c++/4.3/streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 297 "/usr/include/c++/4.3/streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 319 "/usr/include/c++/4.3/streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 338 "/usr/include/c++/4.3/streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 352 "/usr/include/c++/4.3/streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 377 "/usr/include/c++/4.3/streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 404 "/usr/include/c++/4.3/streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 430 "/usr/include/c++/4.3/streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 444 "/usr/include/c++/4.3/streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 462 "/usr/include/c++/4.3/streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 478 "/usr/include/c++/4.3/streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 489 "/usr/include/c++/4.3/streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 509 "/usr/include/c++/4.3/streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 525 "/usr/include/c++/4.3/streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 535 "/usr/include/c++/4.3/streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 556 "/usr/include/c++/4.3/streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 571 "/usr/include/c++/4.3/streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 582 "/usr/include/c++/4.3/streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 594 "/usr/include/c++/4.3/streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 607 "/usr/include/c++/4.3/streambuf" 3
      virtual int
      sync() { return 0; }
# 629 "/usr/include/c++/4.3/streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 645 "/usr/include/c++/4.3/streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 667 "/usr/include/c++/4.3/streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 680 "/usr/include/c++/4.3/streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 704 "/usr/include/c++/4.3/streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 722 "/usr/include/c++/4.3/streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 747 "/usr/include/c++/4.3/streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 762 "/usr/include/c++/4.3/streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}


# 1 "/usr/include/c++/4.3/bits/streambuf.tcc" 1 3
# 43 "/usr/include/c++/4.3/bits/streambuf.tcc" 3
       
# 44 "/usr/include/c++/4.3/bits/streambuf.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 802 "/usr/include/c++/4.3/streambuf" 2 3
# 50 "/usr/include/c++/4.3/ios" 2 3
# 1 "/usr/include/c++/4.3/bits/basic_ios.h" 1 3
# 40 "/usr/include/c++/4.3/bits/basic_ios.h" 3
       
# 41 "/usr/include/c++/4.3/bits/basic_ios.h" 3



# 1 "/usr/include/c++/4.3/bits/locale_facets.h" 1 3
# 44 "/usr/include/c++/4.3/bits/locale_facets.h" 3
       
# 45 "/usr/include/c++/4.3/bits/locale_facets.h" 3

# 1 "/usr/include/c++/4.3/cwctype" 1 3
# 46 "/usr/include/c++/4.3/cwctype" 3
       
# 47 "/usr/include/c++/4.3/cwctype" 3




# 1 "/usr/include/wctype.h" 1 3 4
# 50 "/usr/include/wctype.h" 3 4



typedef unsigned long int wctype_t;

# 72 "/usr/include/wctype.h" 3 4
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};



extern "C" {








extern int iswalnum (wint_t __wc) throw ();





extern int iswalpha (wint_t __wc) throw ();


extern int iswcntrl (wint_t __wc) throw ();



extern int iswdigit (wint_t __wc) throw ();



extern int iswgraph (wint_t __wc) throw ();




extern int iswlower (wint_t __wc) throw ();


extern int iswprint (wint_t __wc) throw ();




extern int iswpunct (wint_t __wc) throw ();




extern int iswspace (wint_t __wc) throw ();




extern int iswupper (wint_t __wc) throw ();




extern int iswxdigit (wint_t __wc) throw ();





extern int iswblank (wint_t __wc) throw ();
# 172 "/usr/include/wctype.h" 3 4
extern wctype_t wctype (__const char *__property) throw ();



extern int iswctype (wint_t __wc, wctype_t __desc) throw ();










typedef __const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) throw ();


extern wint_t towupper (wint_t __wc) throw ();


}
# 214 "/usr/include/wctype.h" 3 4
extern "C" {




extern wctrans_t wctrans (__const char *__property) throw ();


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) throw ();








extern int iswalnum_l (wint_t __wc, __locale_t __locale) throw ();





extern int iswalpha_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswdigit_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswgraph_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswlower_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswprint_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswpunct_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswspace_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswupper_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswblank_l (wint_t __wc, __locale_t __locale) throw ();



extern wctype_t wctype_l (__const char *__property, __locale_t __locale)
     throw ();



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     throw ();







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) throw ();


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) throw ();



extern wctrans_t wctrans_l (__const char *__property, __locale_t __locale)
     throw ();


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) throw ();



}
# 52 "/usr/include/c++/4.3/cwctype" 2 3
# 81 "/usr/include/c++/4.3/cwctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 47 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.3/cctype" 1 3
# 46 "/usr/include/c++/4.3/cctype" 3
       
# 47 "/usr/include/c++/4.3/cctype" 3
# 48 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/ctype_base.h" 1 3
# 42 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/ctype_base.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = _ISupper;
    static const mask lower = _ISlower;
    static const mask alpha = _ISalpha;
    static const mask digit = _ISdigit;
    static const mask xdigit = _ISxdigit;
    static const mask space = _ISspace;
    static const mask print = _ISprint;
    static const mask graph = _ISalpha | _ISdigit | _ISpunct;
    static const mask cntrl = _IScntrl;
    static const mask punct = _ISpunct;
    static const mask alnum = _ISalpha | _ISdigit;
  };

}
# 49 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3






# 1 "/usr/include/c++/4.3/bits/streambuf_iterator.h" 1 3
# 40 "/usr/include/c++/4.3/bits/streambuf_iterator.h" 3
       
# 41 "/usr/include/c++/4.3/bits/streambuf_iterator.h" 3




namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {
 ;


 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {
 ;



 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }

}
# 56 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 69 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _Tv>
    void
    __convert_to_v(const char* __in, _Tv& __out, ios_base::iostate& __err,
     const __c_locale& __cloc);


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&);



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, const streamsize __newlen,
      const streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 149 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 167 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 184 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 200 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 216 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 230 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 245 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 259 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 274 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 291 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 310 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 329 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 351 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 376 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 395 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 414 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 433 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 451 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 468 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 484 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 501 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 520 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 541 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 563 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 587 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 610 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 679 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 716 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 729 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 742 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 757 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 771 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 785 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 800 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 817 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 833 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 850 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 870 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 897 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 928 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 961 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1010 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1027 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1043 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1060 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1080 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1103 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1129 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1155 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:

      void _M_widen_init() const
      {
 char __tmp[sizeof(_M_widen)];
 for (size_t __i = 0; __i < sizeof(_M_widen); ++__i)
   __tmp[__i] = __i;
 do_widen(__tmp, __tmp + sizeof(__tmp), _M_widen);

 _M_widen_ok = 1;

 if (__builtin_memcmp(__tmp, _M_widen, sizeof(_M_widen)))
   _M_widen_ok = 2;
      }




      void _M_narrow_init() const
      {
 char __tmp[sizeof(_M_narrow)];
 for (size_t __i = 0; __i < sizeof(_M_narrow); ++__i)
   __tmp[__i] = __i;
 do_narrow(__tmp, __tmp + sizeof(__tmp), 0, _M_narrow);

 _M_narrow_ok = 1;
 if (__builtin_memcmp(__tmp, _M_narrow, sizeof(_M_narrow)))
   _M_narrow_ok = 2;
 else
   {


     char __c;
     do_narrow(__tmp, __tmp + 1, 1, &__c);
     if (__c == 1)
       _M_narrow_ok = 2;
   }
      }
    };

  template<>
    const ctype<char>&
    use_facet<ctype<char> >(const locale& __loc);
# 1219 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1252 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1263 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const;


      virtual
      ~ctype();
# 1287 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1306 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1324 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1342 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1359 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1376 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1392 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1409 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1429 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1451 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1474 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1500 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype();
    };

  template<>
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale& __loc);



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}


# 1 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/ctype_inline.h" 1 3
# 42 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/ctype_inline.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      ++__low;
    return __low;
  }

}
# 1560 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod);
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1684 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1721 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1735 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1749 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1762 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1793 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1806 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1819 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1836 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1848 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1861 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1874 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1887 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };


# 1956 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1977 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 2003 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2039 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2098 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2140 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string& __xtrc) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT& __v) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2211 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, long&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
       unsigned short&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned int&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned long&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long long&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned long long&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2270 "/usr/include/c++/4.3/bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2287 "/usr/include/c++/4.3/bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2308 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2326 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2368 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2431 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2456 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2504 "/usr/include/c++/4.3/bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, unsigned long) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long long __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, unsigned long long) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;









  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}


# 1 "/usr/include/c++/4.3/bits/locale_facets.tcc" 1 3
# 40 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
       
# 41 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      _M_grouping_size = __np.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __np.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = (_M_grouping_size
    && static_cast<signed char>(__np.grouping()[0]) > 0);

      _M_truename_size = __np.truename().size();
      _CharT* __truename = new _CharT[_M_truename_size];
      __np.truename().copy(__truename, _M_truename_size);
      _M_truename = __truename;

      _M_falsename_size = __np.falsename().size();
      _CharT* __falsename = new _CharT[_M_falsename_size];
      __np.falsename().copy(__falsename, _M_falsename_size);
      _M_falsename = __falsename;

      _M_decimal_point = __np.decimal_point();
      _M_thousands_sep = __np.thousands_sep();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(__num_base::_S_atoms_out,
   __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out);
      __ct.widen(__num_base::_S_atoms_in,
   __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in);
    }
# 124 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
  bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp);



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err |= ios_base::failbit;
        }


      if (__testeof)
        __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     if (__gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 const __unsigned_type __max = __negative
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testfail = true;
       else
  {
    __result *= __base;
    __testfail |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testfail = true;
    else
      {
        __result *= __base;
        __testfail |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err |= ios_base::failbit;
   }

 if (!__testfail && (__sep_pos || __found_zero
       || __found_grouping.size()))
   __v = __negative ? -__result : __result;
 else
   __err |= ios_base::failbit;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
            __err |= ios_base::failbit;
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   size_t __n;
   bool __testeof = __beg == __end;
          for (__n = 0; !__testeof; ++__n)
            {
       const char_type __c = *__beg;

       if (__testf)
         {
    if (__n < __lc->_M_falsename_size)
      __testf = __c == __lc->_M_falsename[__n];
    else
      break;
  }

       if (__testt)
         {
    if (__n < __lc->_M_truename_size)
      __testt = __c == __lc->_M_truename[__n];
    else
      break;
  }

       if (!__testf && !__testt)
  break;

       if (++__beg == __end)
  __testeof = true;
            }
   if (__testf && __n == __lc->_M_falsename_size)
     __v = false;
   else if (__testt && __n == __lc->_M_truename_size)
     __v = true;
   else
     __err |= ios_base::failbit;

          if (__testeof)
            __err |= ios_base::eofbit;
        }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned short& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned int& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }


  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned long long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }


  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      return __beg;
    }
# 717 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      if (!(__err & ios_base::failbit))
 __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 952 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1013 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       _CharT* __cs
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __w));
       _M_pad(__fill, __w, __io, __cs, __name, __len);
       __name = __cs;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           unsigned long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }


  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, long long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           unsigned long long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }


  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1152 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase
      | ios_base::internal);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }


# 1190 "/usr/include/c++/4.3/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       const streamsize __newlen,
       const streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2636 "/usr/include/c++/4.3/bits/locale_facets.h" 2 3
# 45 "/usr/include/c++/4.3/bits/basic_ios.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 65 "/usr/include/c++/4.3/bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 130 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 141 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 194 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 215 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 250 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 288 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 300 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 340 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 354 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 383 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 403 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 423 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 442 "/usr/include/c++/4.3/bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}


# 1 "/usr/include/c++/4.3/bits/basic_ios.tcc" 1 3
# 39 "/usr/include/c++/4.3/bits/basic_ios.tcc" 3
       
# 40 "/usr/include/c++/4.3/bits/basic_ios.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 150 "/usr/include/c++/4.3/bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 476 "/usr/include/c++/4.3/bits/basic_ios.h" 2 3
# 51 "/usr/include/c++/4.3/ios" 2 3
# 46 "/usr/include/c++/4.3/ostream" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {
# 58 "/usr/include/c++/4.3/ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 85 "/usr/include/c++/4.3/ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 111 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 168 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 253 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 286 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 314 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 327 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      flush();
# 338 "/usr/include/c++/4.3/ostream" 3
      pos_type
      tellp();
# 349 "/usr/include/c++/4.3/ostream" 3
      __ostream_type&
      seekp(pos_type);
# 361 "/usr/include/c++/4.3/ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 383 "/usr/include/c++/4.3/ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 402 "/usr/include/c++/4.3/ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 412 "/usr/include/c++/4.3/ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 430 "/usr/include/c++/4.3/ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 451 "/usr/include/c++/4.3/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 493 "/usr/include/c++/4.3/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 543 "/usr/include/c++/4.3/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

}


# 1 "/usr/include/c++/4.3/bits/ostream.tcc" 1 3
# 44 "/usr/include/c++/4.3/bits/ostream.tcc" 3
       
# 45 "/usr/include/c++/4.3/bits/ostream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   try
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 573 "/usr/include/c++/4.3/ostream" 2 3
# 46 "/usr/include/c++/4.3/iostream" 2 3
# 1 "/usr/include/c++/4.3/istream" 1 3
# 43 "/usr/include/c++/4.3/istream" 3
       
# 44 "/usr/include/c++/4.3/istream" 3




namespace std __attribute__ ((__visibility__ ("default"))) {
# 58 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 94 "/usr/include/c++/4.3/istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 122 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 169 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 241 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 251 "/usr/include/c++/4.3/istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 283 "/usr/include/c++/4.3/istream" 3
      int_type
      get();
# 297 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      get(char_type& __c);
# 324 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 335 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 358 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 368 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 397 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 408 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 432 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 449 "/usr/include/c++/4.3/istream" 3
      int_type
      peek();
# 467 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 486 "/usr/include/c++/4.3/istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 502 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      putback(char_type __c);
# 517 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      unget();
# 535 "/usr/include/c++/4.3/istream" 3
      int
      sync();
# 549 "/usr/include/c++/4.3/istream" 3
      pos_type
      tellg();
# 564 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      seekg(pos_type);
# 580 "/usr/include/c++/4.3/istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 638 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 670 "/usr/include/c++/4.3/istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "/usr/include/c++/4.3/istream" 3
      operator bool() const
      { return _M_ok; }

    private:
      bool _M_ok;
    };
# 700 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 741 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 768 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 829 "/usr/include/c++/4.3/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);

}


# 1 "/usr/include/c++/4.3/bits/istream.tcc" 1 3
# 44 "/usr/include/c++/4.3/bits/istream.tcc" 3
       
# 45 "/usr/include/c++/4.3/bits/istream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<short>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<short>::__max)
     __n = short(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<int>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<int>::__max)
     __n = int(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::failbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 468 "/usr/include/c++/4.3/bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 837 "/usr/include/c++/4.3/istream" 2 3
# 47 "/usr/include/c++/4.3/iostream" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 63 "/usr/include/c++/4.3/iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 22 "hex_puzzzle.cpp" 2
# 1 "/usr/include/c++/4.3/cctype" 1 3
# 46 "/usr/include/c++/4.3/cctype" 3
       
# 47 "/usr/include/c++/4.3/cctype" 3
# 23 "hex_puzzzle.cpp" 2
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
extern "C" {



# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 24 "hex_puzzzle.cpp" 2
# 1 "/usr/include/iconv.h" 1 3 4
# 24 "/usr/include/iconv.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 25 "/usr/include/iconv.h" 2 3 4


extern "C" {


typedef void *iconv_t;







extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);





extern int iconv_close (iconv_t __cd);

}
# 25 "hex_puzzzle.cpp" 2
# 66 "hex_puzzzle.cpp"
const char * mapname = "Levels\\map_maybe\\map.lev";







# 1 "state.h" 1
# 41 "state.h"
# 1 "/usr/include/SDL/SDL.h" 1 3 4
# 28 "/usr/include/SDL/SDL.h" 3 4
# 1 "/usr/include/SDL/SDL_main.h" 1 3 4
# 26 "/usr/include/SDL/SDL_main.h" 3 4
# 1 "/usr/include/SDL/SDL_stdinc.h" 1 3 4
# 28 "/usr/include/SDL/SDL_stdinc.h" 3 4
# 1 "/usr/include/SDL/SDL_config.h" 1 3 4
# 30 "/usr/include/SDL/SDL_config.h" 3 4
# 1 "/usr/include/SDL/SDL_platform.h" 1 3 4
# 31 "/usr/include/SDL/SDL_config.h" 2 3 4
# 29 "/usr/include/SDL/SDL_stdinc.h" 2 3 4



# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;
# 72 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 141 "/usr/include/sys/types.h" 3 4
typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 35 "/usr/include/sys/select.h" 2 3 4
# 46 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4




typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 273 "/usr/include/sys/types.h" 3 4
}
# 33 "/usr/include/SDL/SDL_stdinc.h" 2 3 4





# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () __attribute__ ((__warn_unused_result__));




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

# 240 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) __attribute__ ((__warn_unused_result__));

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) __attribute__ ((__warn_unused_result__));

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) __attribute__ ((__warn_unused_result__));

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) __attribute__ ((__warn_unused_result__));

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));





extern __inline __attribute__ ((__gnu_inline__)) double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline __attribute__ ((__gnu_inline__)) int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () __attribute__ ((__warn_unused_result__));


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 327 "/usr/include/stdlib.h" 3 4
extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));






extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw ();






extern int clearenv (void) throw ();
# 583 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 594 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 604 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 614 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 625 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 635 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));









extern int system (__const char *__command) __attribute__ ((__warn_unused_result__));






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 662 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 735 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () __attribute__ ((__warn_unused_result__));


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () __attribute__ ((__warn_unused_result__));


extern int wctomb (char *__s, wchar_t __wchar) throw () __attribute__ ((__warn_unused_result__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 823 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));





# 1 "/usr/include/bits/stdlib.h" 1 3 4
# 24 "/usr/include/bits/stdlib.h" 3 4
extern char *__realpath_chk (__const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) throw () __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (__const char *__restrict __name, char *__restrict __resolved) throw () __asm__ ("" "realpath") __attribute__ ((__warn_unused_result__));


extern char *__realpath_chk_warn (__const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) throw () __asm__ ("" "__realpath_chk") __attribute__ ((__warn_unused_result__))



     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) char *
realpath (__const char *__restrict __name, char *__restrict __resolved) throw ()
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ptsname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ptsname_r_chk")


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) int
ptsname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  throw () __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) throw () __asm__ ("" "wctomb") __attribute__ ((__warn_unused_result__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __attribute__ ((__warn_unused_result__)) int
wctomb (char *__s, wchar_t __wchar) throw ()
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         __const char *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len) throw () __asm__ ("" "mbstowcs");



extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__mbstowcs_chk")



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
mbstowcs (wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         __const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __wcstombs_alias (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len) throw () __asm__ ("" "wcstombs");



extern size_t __wcstombs_chk_warn (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__wcstombs_chk")



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) size_t
wcstombs (char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 883 "/usr/include/stdlib.h" 2 3 4
# 891 "/usr/include/stdlib.h" 3 4
}
# 39 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 40 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stdarg.h" 1 3 4
# 41 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 58 "/usr/include/SDL/SDL_stdinc.h" 3 4
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern void *rawmemchr (__const void *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 121 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strchrnul (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));




extern char *strcasestr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 281 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));






extern char *basename (__const char *__filename) throw () __attribute__ ((__nonnull__ (1)));
# 428 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string3.h" 1 3 4
# 23 "/usr/include/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")));
# 48 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memcpy (void *__restrict __dest, __const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memmove (void *__restrict __dest, __const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
mempcpy (void *__restrict __dest, __const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 77 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memset (void *__dest, int __ch, size_t __len) throw ()
{
  if (__builtin_constant_p (__len) && __len == 0)
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void
bcopy (__const void *__restrict __src, void *__restrict __dest, size_t __len) throw ()

{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void
bzero (void *__dest, size_t __len) throw ()
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strcpy (char *__restrict __dest, __const char *__restrict __src) throw ()
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
stpcpy (char *__restrict __dest, __const char *__restrict __src) throw ()
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strncpy (char *__restrict __dest, __const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, __const char *__src, size_t __n,
       size_t __destlen) throw ();
extern char *__stpncpy_alias (char *__dest, __const char *__src, size_t __n) throw () __asm__ ("" "stpncpy");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
stpncpy (char *__dest, __const char *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strcat (char *__restrict __dest, __const char *__restrict __src) throw ()
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strncat (char *__restrict __dest, __const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 429 "/usr/include/string.h" 2 3 4



}
# 59 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


# 1 "/usr/include/strings.h" 1 3 4
# 62 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


# 1 "/usr/include/inttypes.h" 1 3 4
# 274 "/usr/include/inttypes.h" 3 4
extern "C" {




typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 298 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) throw () __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      throw () __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) throw ();


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) throw ();


extern intmax_t wcstoimax (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();


extern uintmax_t wcstoumax (__const wchar_t *__restrict __nptr,
       wchar_t ** __restrict __endptr, int __base)
     throw ();





extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (__const char *
          __restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (__const wchar_t * __restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
wcstoimax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (__const wchar_t *
          __restrict __nptr,
          wchar_t **
          __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
wcstoumax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 442 "/usr/include/inttypes.h" 3 4
}
# 65 "/usr/include/SDL/SDL_stdinc.h" 2 3 4




# 1 "/usr/include/ctype.h" 1 3 4
# 70 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 80 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef enum SDL_bool {
 SDL_FALSE = 0,
 SDL_TRUE = 1
} SDL_bool;

typedef int8_t Sint8;
typedef uint8_t Uint8;
typedef int16_t Sint16;
typedef uint16_t Uint16;
typedef int32_t Sint32;
typedef uint32_t Uint32;


typedef int64_t Sint64;

typedef uint64_t Uint64;
# 109 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef int SDL_dummy_uint8[(sizeof(Uint8) == 1) * 2 - 1];
typedef int SDL_dummy_sint8[(sizeof(Sint8) == 1) * 2 - 1];
typedef int SDL_dummy_uint16[(sizeof(Uint16) == 2) * 2 - 1];
typedef int SDL_dummy_sint16[(sizeof(Sint16) == 2) * 2 - 1];
typedef int SDL_dummy_uint32[(sizeof(Uint32) == 4) * 2 - 1];
typedef int SDL_dummy_sint32[(sizeof(Sint32) == 4) * 2 - 1];
typedef int SDL_dummy_uint64[(sizeof(Uint64) == 8) * 2 - 1];
typedef int SDL_dummy_sint64[(sizeof(Sint64) == 8) * 2 - 1];
# 128 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef enum {
 DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;


typedef int SDL_dummy_enum[(sizeof(SDL_DUMMY_ENUM) == sizeof(int)) * 2 - 1];



# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 138 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


extern "C" {
# 349 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) void * SDL_revcpy(void *dst, const void *src, size_t len);
# 382 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) size_t SDL_strlcpy(char *dst, const char *src, size_t maxlen);





extern __attribute__ ((visibility("default"))) size_t SDL_strlcat(char *dst, const char *src, size_t maxlen);
# 400 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_strrev(char *string);





extern __attribute__ ((visibility("default"))) char * SDL_strupr(char *string);





extern __attribute__ ((visibility("default"))) char * SDL_strlwr(char *string);
# 446 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_ltoa(long value, char *string, int radix);
# 458 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_ultoa(unsigned long value, char *string, int radix);
# 478 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char* SDL_lltoa(Sint64 value, char *string, int radix);





extern __attribute__ ((visibility("default"))) char* SDL_ulltoa(Uint64 value, char *string, int radix);
# 580 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) size_t SDL_iconv(iconv_t cd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);



extern __attribute__ ((visibility("default"))) char * SDL_iconv_string(const char *tocode, const char *fromcode, const char *inbuf, size_t inbytesleft);






}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 594 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 27 "/usr/include/SDL/SDL_main.h" 2 3 4
# 29 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/SDL_audio.h" 1 3 4
# 29 "/usr/include/SDL/SDL_audio.h" 3 4
# 1 "/usr/include/SDL/SDL_error.h" 1 3 4
# 30 "/usr/include/SDL/SDL_error.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 31 "/usr/include/SDL/SDL_error.h" 2 3 4


extern "C" {



extern __attribute__ ((visibility("default"))) void SDL_SetError(const char *fmt, ...);
extern __attribute__ ((visibility("default"))) char * SDL_GetError(void);
extern __attribute__ ((visibility("default"))) void SDL_ClearError(void);




typedef enum {
 SDL_ENOMEM,
 SDL_EFREAD,
 SDL_EFWRITE,
 SDL_EFSEEK,
 SDL_UNSUPPORTED,
 SDL_LASTERROR
} SDL_errorcode;
extern __attribute__ ((visibility("default"))) void SDL_Error(SDL_errorcode code);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 60 "/usr/include/SDL/SDL_error.h" 2 3 4
# 30 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_endian.h" 1 3 4
# 47 "/usr/include/SDL/SDL_endian.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 48 "/usr/include/SDL/SDL_endian.h" 2 3 4


extern "C" {
# 66 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint16 SDL_Swap16(Uint16 x)
{
 __asm__("xchgb %b0,%h0" : "=Q" (x) : "0" (x));
 return x;
}
# 99 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint32 SDL_Swap32(Uint32 x)
{
 __asm__("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}
# 142 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint64 SDL_Swap64(Uint64 x)
{
 __asm__("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}
# 190 "/usr/include/SDL/SDL_endian.h" 3 4
}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 193 "/usr/include/SDL/SDL_endian.h" 2 3 4
# 31 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_mutex.h" 1 3 4
# 34 "/usr/include/SDL/SDL_mutex.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_mutex.h" 2 3 4


extern "C" {
# 54 "/usr/include/SDL/SDL_mutex.h" 3 4
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;


extern __attribute__ ((visibility("default"))) SDL_mutex * SDL_CreateMutex(void);



extern __attribute__ ((visibility("default"))) int SDL_mutexP(SDL_mutex *mutex);






extern __attribute__ ((visibility("default"))) int SDL_mutexV(SDL_mutex *mutex);


extern __attribute__ ((visibility("default"))) void SDL_DestroyMutex(SDL_mutex *mutex);







struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;


extern __attribute__ ((visibility("default"))) SDL_sem * SDL_CreateSemaphore(Uint32 initial_value);


extern __attribute__ ((visibility("default"))) void SDL_DestroySemaphore(SDL_sem *sem);





extern __attribute__ ((visibility("default"))) int SDL_SemWait(SDL_sem *sem);




extern __attribute__ ((visibility("default"))) int SDL_SemTryWait(SDL_sem *sem);







extern __attribute__ ((visibility("default"))) int SDL_SemWaitTimeout(SDL_sem *sem, Uint32 ms);




extern __attribute__ ((visibility("default"))) int SDL_SemPost(SDL_sem *sem);


extern __attribute__ ((visibility("default"))) Uint32 SDL_SemValue(SDL_sem *sem);







struct SDL_cond;
typedef struct SDL_cond SDL_cond;


extern __attribute__ ((visibility("default"))) SDL_cond * SDL_CreateCond(void);


extern __attribute__ ((visibility("default"))) void SDL_DestroyCond(SDL_cond *cond);




extern __attribute__ ((visibility("default"))) int SDL_CondSignal(SDL_cond *cond);




extern __attribute__ ((visibility("default"))) int SDL_CondBroadcast(SDL_cond *cond);






extern __attribute__ ((visibility("default"))) int SDL_CondWait(SDL_cond *cond, SDL_mutex *mut);







extern __attribute__ ((visibility("default"))) int SDL_CondWaitTimeout(SDL_cond *cond, SDL_mutex *mutex, Uint32 ms);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 161 "/usr/include/SDL/SDL_mutex.h" 2 3 4
# 32 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_thread.h" 1 3 4
# 37 "/usr/include/SDL/SDL_thread.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 38 "/usr/include/SDL/SDL_thread.h" 2 3 4


extern "C" {



struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;
# 92 "/usr/include/SDL/SDL_thread.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Thread * SDL_CreateThread(int ( *fn)(void *), void *data);



extern __attribute__ ((visibility("default"))) Uint32 SDL_ThreadID(void);




extern __attribute__ ((visibility("default"))) Uint32 SDL_GetThreadID(SDL_Thread *thread);





extern __attribute__ ((visibility("default"))) void SDL_WaitThread(SDL_Thread *thread, int *status);


extern __attribute__ ((visibility("default"))) void SDL_KillThread(SDL_Thread *thread);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 118 "/usr/include/SDL/SDL_thread.h" 2 3 4
# 33 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_rwops.h" 1 3 4
# 33 "/usr/include/SDL/SDL_rwops.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 34 "/usr/include/SDL/SDL_rwops.h" 2 3 4


extern "C" {




typedef struct SDL_RWops {




 int ( *seek)(struct SDL_RWops *context, int offset, int whence);





 int ( *read)(struct SDL_RWops *context, void *ptr, int size, int maxnum);





 int ( *write)(struct SDL_RWops *context, const void *ptr, int size, int num);


 int ( *close)(struct SDL_RWops *context);

 Uint32 type;
 union {
# 77 "/usr/include/SDL/SDL_rwops.h" 3 4
     struct {
  int autoclose;
   FILE *fp;
     } stdio;

     struct {
  Uint8 *base;
   Uint8 *here;
  Uint8 *stop;
     } mem;
     struct {
  void *data1;
     } unknown;
 } hidden;

} SDL_RWops;




extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFile(const char *file, const char *mode);


extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFP(FILE *fp, int autoclose);


extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromMem(void *mem, int size);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromConstMem(const void *mem, int size);

extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_AllocRW(void);
extern __attribute__ ((visibility("default"))) void SDL_FreeRW(SDL_RWops *area);
# 122 "/usr/include/SDL/SDL_rwops.h" 3 4
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadLE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadBE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadLE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadBE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadLE64(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadBE64(SDL_RWops *src);


extern __attribute__ ((visibility("default"))) int SDL_WriteLE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE64(SDL_RWops *dst, Uint64 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE64(SDL_RWops *dst, Uint64 value);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 143 "/usr/include/SDL/SDL_rwops.h" 2 3 4
# 34 "/usr/include/SDL/SDL_audio.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 36 "/usr/include/SDL/SDL_audio.h" 2 3 4


extern "C" {



typedef struct SDL_AudioSpec {
 int freq;
 Uint16 format;
 Uint8 channels;
 Uint8 silence;
 Uint16 samples;
 Uint16 padding;
 Uint32 size;






 void ( *callback)(void *userdata, Uint8 *stream, int len);
 void *userdata;
} SDL_AudioSpec;
# 81 "/usr/include/SDL/SDL_audio.h" 3 4
typedef struct SDL_AudioCVT {
 int needed;
 Uint16 src_format;
 Uint16 dst_format;
 double rate_incr;
 Uint8 *buf;
 int len;
 int len_cvt;
 int len_mult;
 double len_ratio;
 void ( *filters[10])(struct SDL_AudioCVT *cvt, Uint16 format);
 int filter_index;
} SDL_AudioCVT;
# 102 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_AudioInit(const char *driver_name);
extern __attribute__ ((visibility("default"))) void SDL_AudioQuit(void);





extern __attribute__ ((visibility("default"))) char * SDL_AudioDriverName(char *namebuf, int maxlen);
# 152 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained);




typedef enum {
 SDL_AUDIO_STOPPED = 0,
 SDL_AUDIO_PLAYING,
 SDL_AUDIO_PAUSED
} SDL_audiostatus;
extern __attribute__ ((visibility("default"))) SDL_audiostatus SDL_GetAudioStatus(void);
# 171 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_PauseAudio(int pause_on);
# 190 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_AudioSpec * SDL_LoadWAV_RW(SDL_RWops *src, int freesrc, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len);
# 199 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_FreeWAV(Uint8 *audio_buf);
# 208 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_BuildAudioCVT(SDL_AudioCVT *cvt,
  Uint16 src_format, Uint8 src_channels, int src_rate,
  Uint16 dst_format, Uint8 dst_channels, int dst_rate);
# 220 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_ConvertAudio(SDL_AudioCVT *cvt);
# 230 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_MixAudio(Uint8 *dst, const Uint8 *src, Uint32 len, int volume);







extern __attribute__ ((visibility("default"))) void SDL_LockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_UnlockAudio(void);




extern __attribute__ ((visibility("default"))) void SDL_CloseAudio(void);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 252 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 31 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_cdrom.h" 1 3 4
# 31 "/usr/include/SDL/SDL_cdrom.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 32 "/usr/include/SDL/SDL_cdrom.h" 2 3 4


extern "C" {
# 50 "/usr/include/SDL/SDL_cdrom.h" 3 4
typedef enum {
 CD_TRAYEMPTY,
 CD_STOPPED,
 CD_PLAYING,
 CD_PAUSED,
 CD_ERROR = -1
} CDstatus;




typedef struct SDL_CDtrack {
 Uint8 id;
 Uint8 type;
 Uint16 unused;
 Uint32 length;
 Uint32 offset;
} SDL_CDtrack;


typedef struct SDL_CD {
 int id;
 CDstatus status;


 int numtracks;
 int cur_track;
 int cur_frame;
 SDL_CDtrack track[99 +1];
} SDL_CD;
# 98 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_CDNumDrives(void);







extern __attribute__ ((visibility("default"))) const char * SDL_CDName(int drive);







extern __attribute__ ((visibility("default"))) SDL_CD * SDL_CDOpen(int drive);





extern __attribute__ ((visibility("default"))) CDstatus SDL_CDStatus(SDL_CD *cdrom);
# 141 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_CDPlayTracks(SDL_CD *cdrom,
  int start_track, int start_frame, int ntracks, int nframes);




extern __attribute__ ((visibility("default"))) int SDL_CDPlay(SDL_CD *cdrom, int start, int length);


extern __attribute__ ((visibility("default"))) int SDL_CDPause(SDL_CD *cdrom);


extern __attribute__ ((visibility("default"))) int SDL_CDResume(SDL_CD *cdrom);


extern __attribute__ ((visibility("default"))) int SDL_CDStop(SDL_CD *cdrom);


extern __attribute__ ((visibility("default"))) int SDL_CDEject(SDL_CD *cdrom);


extern __attribute__ ((visibility("default"))) void SDL_CDClose(SDL_CD *cdrom);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 170 "/usr/include/SDL/SDL_cdrom.h" 2 3 4
# 32 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_cpuinfo.h" 1 3 4
# 31 "/usr/include/SDL/SDL_cpuinfo.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 32 "/usr/include/SDL/SDL_cpuinfo.h" 2 3 4


extern "C" {




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasRDTSC(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMX(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMXExt(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNow(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNowExt(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE2(void);



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAltiVec(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 74 "/usr/include/SDL/SDL_cpuinfo.h" 2 3 4
# 33 "/usr/include/SDL/SDL.h" 2 3 4


# 1 "/usr/include/SDL/SDL_events.h" 1 3 4
# 30 "/usr/include/SDL/SDL_events.h" 3 4
# 1 "/usr/include/SDL/SDL_active.h" 1 3 4
# 31 "/usr/include/SDL/SDL_active.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 32 "/usr/include/SDL/SDL_active.h" 2 3 4


extern "C" {
# 49 "/usr/include/SDL/SDL_active.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetAppState(void);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 57 "/usr/include/SDL/SDL_active.h" 2 3 4
# 31 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_keyboard.h" 1 3 4
# 30 "/usr/include/SDL/SDL_keyboard.h" 3 4
# 1 "/usr/include/SDL/SDL_keysym.h" 1 3 4
# 32 "/usr/include/SDL/SDL_keysym.h" 3 4
typedef enum {

 SDLK_UNKNOWN = 0,
 SDLK_FIRST = 0,
 SDLK_BACKSPACE = 8,
 SDLK_TAB = 9,
 SDLK_CLEAR = 12,
 SDLK_RETURN = 13,
 SDLK_PAUSE = 19,
 SDLK_ESCAPE = 27,
 SDLK_SPACE = 32,
 SDLK_EXCLAIM = 33,
 SDLK_QUOTEDBL = 34,
 SDLK_HASH = 35,
 SDLK_DOLLAR = 36,
 SDLK_AMPERSAND = 38,
 SDLK_QUOTE = 39,
 SDLK_LEFTPAREN = 40,
 SDLK_RIGHTPAREN = 41,
 SDLK_ASTERISK = 42,
 SDLK_PLUS = 43,
 SDLK_COMMA = 44,
 SDLK_MINUS = 45,
 SDLK_PERIOD = 46,
 SDLK_SLASH = 47,
 SDLK_0 = 48,
 SDLK_1 = 49,
 SDLK_2 = 50,
 SDLK_3 = 51,
 SDLK_4 = 52,
 SDLK_5 = 53,
 SDLK_6 = 54,
 SDLK_7 = 55,
 SDLK_8 = 56,
 SDLK_9 = 57,
 SDLK_COLON = 58,
 SDLK_SEMICOLON = 59,
 SDLK_LESS = 60,
 SDLK_EQUALS = 61,
 SDLK_GREATER = 62,
 SDLK_QUESTION = 63,
 SDLK_AT = 64,



 SDLK_LEFTBRACKET = 91,
 SDLK_BACKSLASH = 92,
 SDLK_RIGHTBRACKET = 93,
 SDLK_CARET = 94,
 SDLK_UNDERSCORE = 95,
 SDLK_BACKQUOTE = 96,
 SDLK_a = 97,
 SDLK_b = 98,
 SDLK_c = 99,
 SDLK_d = 100,
 SDLK_e = 101,
 SDLK_f = 102,
 SDLK_g = 103,
 SDLK_h = 104,
 SDLK_i = 105,
 SDLK_j = 106,
 SDLK_k = 107,
 SDLK_l = 108,
 SDLK_m = 109,
 SDLK_n = 110,
 SDLK_o = 111,
 SDLK_p = 112,
 SDLK_q = 113,
 SDLK_r = 114,
 SDLK_s = 115,
 SDLK_t = 116,
 SDLK_u = 117,
 SDLK_v = 118,
 SDLK_w = 119,
 SDLK_x = 120,
 SDLK_y = 121,
 SDLK_z = 122,
 SDLK_DELETE = 127,



 SDLK_WORLD_0 = 160,
 SDLK_WORLD_1 = 161,
 SDLK_WORLD_2 = 162,
 SDLK_WORLD_3 = 163,
 SDLK_WORLD_4 = 164,
 SDLK_WORLD_5 = 165,
 SDLK_WORLD_6 = 166,
 SDLK_WORLD_7 = 167,
 SDLK_WORLD_8 = 168,
 SDLK_WORLD_9 = 169,
 SDLK_WORLD_10 = 170,
 SDLK_WORLD_11 = 171,
 SDLK_WORLD_12 = 172,
 SDLK_WORLD_13 = 173,
 SDLK_WORLD_14 = 174,
 SDLK_WORLD_15 = 175,
 SDLK_WORLD_16 = 176,
 SDLK_WORLD_17 = 177,
 SDLK_WORLD_18 = 178,
 SDLK_WORLD_19 = 179,
 SDLK_WORLD_20 = 180,
 SDLK_WORLD_21 = 181,
 SDLK_WORLD_22 = 182,
 SDLK_WORLD_23 = 183,
 SDLK_WORLD_24 = 184,
 SDLK_WORLD_25 = 185,
 SDLK_WORLD_26 = 186,
 SDLK_WORLD_27 = 187,
 SDLK_WORLD_28 = 188,
 SDLK_WORLD_29 = 189,
 SDLK_WORLD_30 = 190,
 SDLK_WORLD_31 = 191,
 SDLK_WORLD_32 = 192,
 SDLK_WORLD_33 = 193,
 SDLK_WORLD_34 = 194,
 SDLK_WORLD_35 = 195,
 SDLK_WORLD_36 = 196,
 SDLK_WORLD_37 = 197,
 SDLK_WORLD_38 = 198,
 SDLK_WORLD_39 = 199,
 SDLK_WORLD_40 = 200,
 SDLK_WORLD_41 = 201,
 SDLK_WORLD_42 = 202,
 SDLK_WORLD_43 = 203,
 SDLK_WORLD_44 = 204,
 SDLK_WORLD_45 = 205,
 SDLK_WORLD_46 = 206,
 SDLK_WORLD_47 = 207,
 SDLK_WORLD_48 = 208,
 SDLK_WORLD_49 = 209,
 SDLK_WORLD_50 = 210,
 SDLK_WORLD_51 = 211,
 SDLK_WORLD_52 = 212,
 SDLK_WORLD_53 = 213,
 SDLK_WORLD_54 = 214,
 SDLK_WORLD_55 = 215,
 SDLK_WORLD_56 = 216,
 SDLK_WORLD_57 = 217,
 SDLK_WORLD_58 = 218,
 SDLK_WORLD_59 = 219,
 SDLK_WORLD_60 = 220,
 SDLK_WORLD_61 = 221,
 SDLK_WORLD_62 = 222,
 SDLK_WORLD_63 = 223,
 SDLK_WORLD_64 = 224,
 SDLK_WORLD_65 = 225,
 SDLK_WORLD_66 = 226,
 SDLK_WORLD_67 = 227,
 SDLK_WORLD_68 = 228,
 SDLK_WORLD_69 = 229,
 SDLK_WORLD_70 = 230,
 SDLK_WORLD_71 = 231,
 SDLK_WORLD_72 = 232,
 SDLK_WORLD_73 = 233,
 SDLK_WORLD_74 = 234,
 SDLK_WORLD_75 = 235,
 SDLK_WORLD_76 = 236,
 SDLK_WORLD_77 = 237,
 SDLK_WORLD_78 = 238,
 SDLK_WORLD_79 = 239,
 SDLK_WORLD_80 = 240,
 SDLK_WORLD_81 = 241,
 SDLK_WORLD_82 = 242,
 SDLK_WORLD_83 = 243,
 SDLK_WORLD_84 = 244,
 SDLK_WORLD_85 = 245,
 SDLK_WORLD_86 = 246,
 SDLK_WORLD_87 = 247,
 SDLK_WORLD_88 = 248,
 SDLK_WORLD_89 = 249,
 SDLK_WORLD_90 = 250,
 SDLK_WORLD_91 = 251,
 SDLK_WORLD_92 = 252,
 SDLK_WORLD_93 = 253,
 SDLK_WORLD_94 = 254,
 SDLK_WORLD_95 = 255,


 SDLK_KP0 = 256,
 SDLK_KP1 = 257,
 SDLK_KP2 = 258,
 SDLK_KP3 = 259,
 SDLK_KP4 = 260,
 SDLK_KP5 = 261,
 SDLK_KP6 = 262,
 SDLK_KP7 = 263,
 SDLK_KP8 = 264,
 SDLK_KP9 = 265,
 SDLK_KP_PERIOD = 266,
 SDLK_KP_DIVIDE = 267,
 SDLK_KP_MULTIPLY = 268,
 SDLK_KP_MINUS = 269,
 SDLK_KP_PLUS = 270,
 SDLK_KP_ENTER = 271,
 SDLK_KP_EQUALS = 272,


 SDLK_UP = 273,
 SDLK_DOWN = 274,
 SDLK_RIGHT = 275,
 SDLK_LEFT = 276,
 SDLK_INSERT = 277,
 SDLK_HOME = 278,
 SDLK_END = 279,
 SDLK_PAGEUP = 280,
 SDLK_PAGEDOWN = 281,


 SDLK_F1 = 282,
 SDLK_F2 = 283,
 SDLK_F3 = 284,
 SDLK_F4 = 285,
 SDLK_F5 = 286,
 SDLK_F6 = 287,
 SDLK_F7 = 288,
 SDLK_F8 = 289,
 SDLK_F9 = 290,
 SDLK_F10 = 291,
 SDLK_F11 = 292,
 SDLK_F12 = 293,
 SDLK_F13 = 294,
 SDLK_F14 = 295,
 SDLK_F15 = 296,


 SDLK_NUMLOCK = 300,
 SDLK_CAPSLOCK = 301,
 SDLK_SCROLLOCK = 302,
 SDLK_RSHIFT = 303,
 SDLK_LSHIFT = 304,
 SDLK_RCTRL = 305,
 SDLK_LCTRL = 306,
 SDLK_RALT = 307,
 SDLK_LALT = 308,
 SDLK_RMETA = 309,
 SDLK_LMETA = 310,
 SDLK_LSUPER = 311,
 SDLK_RSUPER = 312,
 SDLK_MODE = 313,
 SDLK_COMPOSE = 314,


 SDLK_HELP = 315,
 SDLK_PRINT = 316,
 SDLK_SYSREQ = 317,
 SDLK_BREAK = 318,
 SDLK_MENU = 319,
 SDLK_POWER = 320,
 SDLK_EURO = 321,
 SDLK_UNDO = 322,



 SDLK_LAST
} SDLKey;


typedef enum {
 KMOD_NONE = 0x0000,
 KMOD_LSHIFT= 0x0001,
 KMOD_RSHIFT= 0x0002,
 KMOD_LCTRL = 0x0040,
 KMOD_RCTRL = 0x0080,
 KMOD_LALT = 0x0100,
 KMOD_RALT = 0x0200,
 KMOD_LMETA = 0x0400,
 KMOD_RMETA = 0x0800,
 KMOD_NUM = 0x1000,
 KMOD_CAPS = 0x2000,
 KMOD_MODE = 0x4000,
 KMOD_RESERVED = 0x8000
} SDLMod;
# 31 "/usr/include/SDL/SDL_keyboard.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 33 "/usr/include/SDL/SDL_keyboard.h" 2 3 4


extern "C" {
# 54 "/usr/include/SDL/SDL_keyboard.h" 3 4
typedef struct SDL_keysym {
 Uint8 scancode;
 SDLKey sym;
 SDLMod mod;
 Uint16 unicode;
} SDL_keysym;
# 73 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_EnableUNICODE(int enable);
# 86 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_EnableKeyRepeat(int delay, int interval);
extern __attribute__ ((visibility("default"))) void SDL_GetKeyRepeat(int *delay, int *interval);
# 96 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 * SDL_GetKeyState(int *numkeys);




extern __attribute__ ((visibility("default"))) SDLMod SDL_GetModState(void);





extern __attribute__ ((visibility("default"))) void SDL_SetModState(SDLMod modstate);




extern __attribute__ ((visibility("default"))) char * SDL_GetKeyName(SDLKey key);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 120 "/usr/include/SDL/SDL_keyboard.h" 2 3 4
# 32 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_mouse.h" 1 3 4
# 30 "/usr/include/SDL/SDL_mouse.h" 3 4
# 1 "/usr/include/SDL/SDL_video.h" 1 3 4
# 32 "/usr/include/SDL/SDL_video.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 33 "/usr/include/SDL/SDL_video.h" 2 3 4


extern "C" {







typedef struct SDL_Rect {
 Sint16 x, y;
 Uint16 w, h;
} SDL_Rect;

typedef struct SDL_Color {
 Uint8 r;
 Uint8 g;
 Uint8 b;
 Uint8 unused;
} SDL_Color;


typedef struct SDL_Palette {
 int ncolors;
 SDL_Color *colors;
} SDL_Palette;


typedef struct SDL_PixelFormat {
 SDL_Palette *palette;
 Uint8 BitsPerPixel;
 Uint8 BytesPerPixel;
 Uint8 Rloss;
 Uint8 Gloss;
 Uint8 Bloss;
 Uint8 Aloss;
 Uint8 Rshift;
 Uint8 Gshift;
 Uint8 Bshift;
 Uint8 Ashift;
 Uint32 Rmask;
 Uint32 Gmask;
 Uint32 Bmask;
 Uint32 Amask;


 Uint32 colorkey;

 Uint8 alpha;
} SDL_PixelFormat;




typedef struct SDL_Surface {
 Uint32 flags;
 SDL_PixelFormat *format;
 int w, h;
 Uint16 pitch;
 void *pixels;
 int offset;


 struct private_hwdata *hwdata;


 SDL_Rect clip_rect;
 Uint32 unused1;


 Uint32 locked;


 struct SDL_BlitMap *map;


 unsigned int format_version;


 int refcount;
} SDL_Surface;
# 144 "/usr/include/SDL/SDL_video.h" 3 4
typedef int (*SDL_blit)(struct SDL_Surface *src, SDL_Rect *srcrect,
   struct SDL_Surface *dst, SDL_Rect *dstrect);



typedef struct SDL_VideoInfo {
 Uint32 hw_available :1;
 Uint32 wm_available :1;
 Uint32 UnusedBits1 :6;
 Uint32 UnusedBits2 :1;
 Uint32 blit_hw :1;
 Uint32 blit_hw_CC :1;
 Uint32 blit_hw_A :1;
 Uint32 blit_sw :1;
 Uint32 blit_sw_CC :1;
 Uint32 blit_sw_A :1;
 Uint32 blit_fill :1;
 Uint32 UnusedBits3 :16;
 Uint32 video_mem;
 SDL_PixelFormat *vfmt;
 int current_w;
 int current_h;
} SDL_VideoInfo;
# 183 "/usr/include/SDL/SDL_video.h" 3 4
typedef struct SDL_Overlay {
 Uint32 format;
 int w, h;
 int planes;
 Uint16 *pitches;
 Uint8 **pixels;


 struct private_yuvhwfuncs *hwfuncs;
 struct private_yuvhwdata *hwdata;


 Uint32 hw_overlay :1;
 Uint32 UnusedBits :31;
} SDL_Overlay;



typedef enum {
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_SWAP_CONTROL
} SDL_GLattr;
# 240 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_VideoInit(const char *driver_name, Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_VideoQuit(void);





extern __attribute__ ((visibility("default"))) char * SDL_VideoDriverName(char *namebuf, int maxlen);







extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_GetVideoSurface(void);







extern __attribute__ ((visibility("default"))) const SDL_VideoInfo * SDL_GetVideoInfo(void);
# 276 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_VideoModeOK(int width, int height, int bpp, Uint32 flags);
# 287 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Rect ** SDL_ListModes(SDL_PixelFormat *format, Uint32 flags);
# 347 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_SetVideoMode
   (int width, int height, int bpp, Uint32 flags);







extern __attribute__ ((visibility("default"))) void SDL_UpdateRects
  (SDL_Surface *screen, int numrects, SDL_Rect *rects);
extern __attribute__ ((visibility("default"))) void SDL_UpdateRect
  (SDL_Surface *screen, Sint32 x, Sint32 y, Uint32 w, Uint32 h);
# 371 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_Flip(SDL_Surface *screen);
# 381 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetGamma(float red, float green, float blue);
# 395 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetGammaRamp(const Uint16 *red, const Uint16 *green, const Uint16 *blue);
# 406 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GetGammaRamp(Uint16 *red, Uint16 *green, Uint16 *blue);
# 423 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetColors(SDL_Surface *surface,
   SDL_Color *colors, int firstcolor, int ncolors);
# 442 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetPalette(SDL_Surface *surface, int flags,
       SDL_Color *colors, int firstcolor,
       int ncolors);




extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGB
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b);




extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGBA
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a);




extern __attribute__ ((visibility("default"))) void SDL_GetRGB(Uint32 pixel, SDL_PixelFormat *fmt,
    Uint8 *r, Uint8 *g, Uint8 *b);




extern __attribute__ ((visibility("default"))) void SDL_GetRGBA(Uint32 pixel, SDL_PixelFormat *fmt,
     Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);
# 507 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurface
   (Uint32 flags, int width, int height, int depth,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceFrom(void *pixels,
   int width, int height, int depth, int pitch,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) void SDL_FreeSurface(SDL_Surface *surface);
# 533 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_LockSurface(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) void SDL_UnlockSurface(SDL_Surface *surface);







extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_LoadBMP_RW(SDL_RWops *src, int freesrc);
# 552 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SaveBMP_RW
  (SDL_Surface *surface, SDL_RWops *dst, int freedst);
# 568 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetColorKey
   (SDL_Surface *surface, Uint32 flag, Uint32 key);
# 586 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetAlpha(SDL_Surface *surface, Uint32 flag, Uint8 alpha);
# 600 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetClipRect(SDL_Surface *surface, const SDL_Rect *rect);






extern __attribute__ ((visibility("default"))) void SDL_GetClipRect(SDL_Surface *surface, SDL_Rect *rect);
# 621 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_ConvertSurface
   (SDL_Surface *src, SDL_PixelFormat *fmt, Uint32 flags);
# 698 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_UpperBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);



extern __attribute__ ((visibility("default"))) int SDL_LowerBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);
# 717 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_FillRect
  (SDL_Surface *dst, SDL_Rect *dstrect, Uint32 color);
# 731 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormat(SDL_Surface *surface);
# 745 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface *surface);
# 757 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Overlay * SDL_CreateYUVOverlay(int width, int height,
    Uint32 format, SDL_Surface *display);


extern __attribute__ ((visibility("default"))) int SDL_LockYUVOverlay(SDL_Overlay *overlay);
extern __attribute__ ((visibility("default"))) void SDL_UnlockYUVOverlay(SDL_Overlay *overlay);







extern __attribute__ ((visibility("default"))) int SDL_DisplayYUVOverlay(SDL_Overlay *overlay, SDL_Rect *dstrect);


extern __attribute__ ((visibility("default"))) void SDL_FreeYUVOverlay(SDL_Overlay *overlay);
# 786 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GL_LoadLibrary(const char *path);




extern __attribute__ ((visibility("default"))) void * SDL_GL_GetProcAddress(const char* proc);




extern __attribute__ ((visibility("default"))) int SDL_GL_SetAttribute(SDL_GLattr attr, int value);
# 807 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GL_GetAttribute(SDL_GLattr attr, int* value);




extern __attribute__ ((visibility("default"))) void SDL_GL_SwapBuffers(void);





extern __attribute__ ((visibility("default"))) void SDL_GL_UpdateRects(int numrects, SDL_Rect* rects);
extern __attribute__ ((visibility("default"))) void SDL_GL_Lock(void);
extern __attribute__ ((visibility("default"))) void SDL_GL_Unlock(void);
# 829 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_WM_SetCaption(const char *title, const char *icon);
extern __attribute__ ((visibility("default"))) void SDL_WM_GetCaption(char **title, char **icon);







extern __attribute__ ((visibility("default"))) void SDL_WM_SetIcon(SDL_Surface *icon, Uint8 *mask);






extern __attribute__ ((visibility("default"))) int SDL_WM_IconifyWindow(void);
# 862 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_WM_ToggleFullScreen(SDL_Surface *surface);





typedef enum {
 SDL_GRAB_QUERY = -1,
 SDL_GRAB_OFF = 0,
 SDL_GRAB_ON = 1,
 SDL_GRAB_FULLSCREEN
} SDL_GrabMode;





extern __attribute__ ((visibility("default"))) SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode);


extern __attribute__ ((visibility("default"))) int SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect,
                                    SDL_Surface *dst, SDL_Rect *dstrect);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 890 "/usr/include/SDL/SDL_video.h" 2 3 4
# 31 "/usr/include/SDL/SDL_mouse.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 33 "/usr/include/SDL/SDL_mouse.h" 2 3 4


extern "C" {


typedef struct WMcursor WMcursor;
typedef struct SDL_Cursor {
 SDL_Rect area;
 Sint16 hot_x, hot_y;
 Uint8 *data;
 Uint8 *mask;
 Uint8 *save[2];
 WMcursor *wm_cursor;
} SDL_Cursor;
# 55 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetMouseState(int *x, int *y);







extern __attribute__ ((visibility("default"))) Uint8 SDL_GetRelativeMouseState(int *x, int *y);




extern __attribute__ ((visibility("default"))) void SDL_WarpMouse(Uint16 x, Uint16 y);
# 83 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateCursor
  (Uint8 *data, Uint8 *mask, int w, int h, int hot_x, int hot_y);






extern __attribute__ ((visibility("default"))) void SDL_SetCursor(SDL_Cursor *cursor);




extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_GetCursor(void);




extern __attribute__ ((visibility("default"))) void SDL_FreeCursor(SDL_Cursor *cursor);
# 110 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_ShowCursor(int toggle);
# 132 "/usr/include/SDL/SDL_mouse.h" 3 4
}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 135 "/usr/include/SDL/SDL_mouse.h" 2 3 4
# 33 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_joystick.h" 1 3 4
# 31 "/usr/include/SDL/SDL_joystick.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 32 "/usr/include/SDL/SDL_joystick.h" 2 3 4


extern "C" {
# 43 "/usr/include/SDL/SDL_joystick.h" 3 4
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;






extern __attribute__ ((visibility("default"))) int SDL_NumJoysticks(void);






extern __attribute__ ((visibility("default"))) const char * SDL_JoystickName(int device_index);
# 67 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_JoystickOpen(int device_index);




extern __attribute__ ((visibility("default"))) int SDL_JoystickOpened(int device_index);




extern __attribute__ ((visibility("default"))) int SDL_JoystickIndex(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumAxes(SDL_Joystick *joystick);






extern __attribute__ ((visibility("default"))) int SDL_JoystickNumBalls(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumHats(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumButtons(SDL_Joystick *joystick);






extern __attribute__ ((visibility("default"))) void SDL_JoystickUpdate(void);
# 115 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_JoystickEventState(int state);






extern __attribute__ ((visibility("default"))) Sint16 SDL_JoystickGetAxis(SDL_Joystick *joystick, int axis);
# 140 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetHat(SDL_Joystick *joystick, int hat);






extern __attribute__ ((visibility("default"))) int SDL_JoystickGetBall(SDL_Joystick *joystick, int ball, int *dx, int *dy);





extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetButton(SDL_Joystick *joystick, int button);




extern __attribute__ ((visibility("default"))) void SDL_JoystickClose(SDL_Joystick *joystick);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 166 "/usr/include/SDL/SDL_joystick.h" 2 3 4
# 34 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_quit.h" 1 3 4
# 35 "/usr/include/SDL/SDL_events.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 37 "/usr/include/SDL/SDL_events.h" 2 3 4


extern "C" {







typedef enum SDL_Events {
       SDL_NOEVENT = 0,
       SDL_ACTIVEEVENT,
       SDL_KEYDOWN,
       SDL_KEYUP,
       SDL_MOUSEMOTION,
       SDL_MOUSEBUTTONDOWN,
       SDL_MOUSEBUTTONUP,
       SDL_JOYAXISMOTION,
       SDL_JOYBALLMOTION,
       SDL_JOYHATMOTION,
       SDL_JOYBUTTONDOWN,
       SDL_JOYBUTTONUP,
       SDL_QUIT,
       SDL_SYSWMEVENT,
       SDL_EVENT_RESERVEDA,
       SDL_EVENT_RESERVEDB,
       SDL_VIDEORESIZE,
       SDL_VIDEOEXPOSE,
       SDL_EVENT_RESERVED2,
       SDL_EVENT_RESERVED3,
       SDL_EVENT_RESERVED4,
       SDL_EVENT_RESERVED5,
       SDL_EVENT_RESERVED6,
       SDL_EVENT_RESERVED7,

       SDL_USEREVENT = 24,



       SDL_NUMEVENTS = 32
} SDL_EventType;



typedef enum SDL_EventMasks {
 SDL_ACTIVEEVENTMASK = (1<<(SDL_ACTIVEEVENT)),
 SDL_KEYDOWNMASK = (1<<(SDL_KEYDOWN)),
 SDL_KEYUPMASK = (1<<(SDL_KEYUP)),
 SDL_KEYEVENTMASK = (1<<(SDL_KEYDOWN))|
                           (1<<(SDL_KEYUP)),
 SDL_MOUSEMOTIONMASK = (1<<(SDL_MOUSEMOTION)),
 SDL_MOUSEBUTTONDOWNMASK = (1<<(SDL_MOUSEBUTTONDOWN)),
 SDL_MOUSEBUTTONUPMASK = (1<<(SDL_MOUSEBUTTONUP)),
 SDL_MOUSEEVENTMASK = (1<<(SDL_MOUSEMOTION))|
                           (1<<(SDL_MOUSEBUTTONDOWN))|
                           (1<<(SDL_MOUSEBUTTONUP)),
 SDL_JOYAXISMOTIONMASK = (1<<(SDL_JOYAXISMOTION)),
 SDL_JOYBALLMOTIONMASK = (1<<(SDL_JOYBALLMOTION)),
 SDL_JOYHATMOTIONMASK = (1<<(SDL_JOYHATMOTION)),
 SDL_JOYBUTTONDOWNMASK = (1<<(SDL_JOYBUTTONDOWN)),
 SDL_JOYBUTTONUPMASK = (1<<(SDL_JOYBUTTONUP)),
 SDL_JOYEVENTMASK = (1<<(SDL_JOYAXISMOTION))|
                           (1<<(SDL_JOYBALLMOTION))|
                           (1<<(SDL_JOYHATMOTION))|
                           (1<<(SDL_JOYBUTTONDOWN))|
                           (1<<(SDL_JOYBUTTONUP)),
 SDL_VIDEORESIZEMASK = (1<<(SDL_VIDEORESIZE)),
 SDL_VIDEOEXPOSEMASK = (1<<(SDL_VIDEOEXPOSE)),
 SDL_QUITMASK = (1<<(SDL_QUIT)),
 SDL_SYSWMEVENTMASK = (1<<(SDL_SYSWMEVENT))
} SDL_EventMask ;



typedef struct SDL_ActiveEvent {
 Uint8 type;
 Uint8 gain;
 Uint8 state;
} SDL_ActiveEvent;


typedef struct SDL_KeyboardEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 SDL_keysym keysym;
} SDL_KeyboardEvent;


typedef struct SDL_MouseMotionEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 Uint16 x, y;
 Sint16 xrel;
 Sint16 yrel;
} SDL_MouseMotionEvent;


typedef struct SDL_MouseButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
 Uint16 x, y;
} SDL_MouseButtonEvent;


typedef struct SDL_JoyAxisEvent {
 Uint8 type;
 Uint8 which;
 Uint8 axis;
 Sint16 value;
} SDL_JoyAxisEvent;


typedef struct SDL_JoyBallEvent {
 Uint8 type;
 Uint8 which;
 Uint8 ball;
 Sint16 xrel;
 Sint16 yrel;
} SDL_JoyBallEvent;


typedef struct SDL_JoyHatEvent {
 Uint8 type;
 Uint8 which;
 Uint8 hat;
 Uint8 value;





} SDL_JoyHatEvent;


typedef struct SDL_JoyButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
} SDL_JoyButtonEvent;





typedef struct SDL_ResizeEvent {
 Uint8 type;
 int w;
 int h;
} SDL_ResizeEvent;


typedef struct SDL_ExposeEvent {
 Uint8 type;
} SDL_ExposeEvent;


typedef struct SDL_QuitEvent {
 Uint8 type;
} SDL_QuitEvent;


typedef struct SDL_UserEvent {
 Uint8 type;
 int code;
 void *data1;
 void *data2;
} SDL_UserEvent;


struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;
typedef struct SDL_SysWMEvent {
 Uint8 type;
 SDL_SysWMmsg *msg;
} SDL_SysWMEvent;


typedef union SDL_Event {
 Uint8 type;
 SDL_ActiveEvent active;
 SDL_KeyboardEvent key;
 SDL_MouseMotionEvent motion;
 SDL_MouseButtonEvent button;
 SDL_JoyAxisEvent jaxis;
 SDL_JoyBallEvent jball;
 SDL_JoyHatEvent jhat;
 SDL_JoyButtonEvent jbutton;
 SDL_ResizeEvent resize;
 SDL_ExposeEvent expose;
 SDL_QuitEvent quit;
 SDL_UserEvent user;
 SDL_SysWMEvent syswm;
} SDL_Event;
# 244 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_PumpEvents(void);
# 258 "/usr/include/SDL/SDL_events.h" 3 4
typedef enum {
 SDL_ADDEVENT,
 SDL_PEEKEVENT,
 SDL_GETEVENT
} SDL_eventaction;

extern __attribute__ ((visibility("default"))) int SDL_PeepEvents(SDL_Event *events, int numevents,
    SDL_eventaction action, Uint32 mask);





extern __attribute__ ((visibility("default"))) int SDL_PollEvent(SDL_Event *event);





extern __attribute__ ((visibility("default"))) int SDL_WaitEvent(SDL_Event *event);





extern __attribute__ ((visibility("default"))) int SDL_PushEvent(SDL_Event *event);







typedef int ( *SDL_EventFilter)(const SDL_Event *event);
# 308 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_SetEventFilter(SDL_EventFilter filter);





extern __attribute__ ((visibility("default"))) SDL_EventFilter SDL_GetEventFilter(void);
# 328 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_EventState(Uint8 type, int state);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 336 "/usr/include/SDL/SDL_events.h" 2 3 4
# 36 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_loadso.h" 1 3 4
# 47 "/usr/include/SDL/SDL_loadso.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 48 "/usr/include/SDL/SDL_loadso.h" 2 3 4


extern "C" {






extern __attribute__ ((visibility("default"))) void * SDL_LoadObject(const char *sofile);





extern __attribute__ ((visibility("default"))) void * SDL_LoadFunction(void *handle, const char *name);


extern __attribute__ ((visibility("default"))) void SDL_UnloadObject(void *handle);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 73 "/usr/include/SDL/SDL_loadso.h" 2 3 4
# 37 "/usr/include/SDL/SDL.h" 2 3 4



# 1 "/usr/include/SDL/SDL_timer.h" 1 3 4
# 31 "/usr/include/SDL/SDL_timer.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 32 "/usr/include/SDL/SDL_timer.h" 2 3 4


extern "C" {
# 46 "/usr/include/SDL/SDL_timer.h" 3 4
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetTicks(void);


extern __attribute__ ((visibility("default"))) void SDL_Delay(Uint32 ms);


typedef Uint32 ( *SDL_TimerCallback)(Uint32 interval);
# 82 "/usr/include/SDL/SDL_timer.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetTimer(Uint32 interval, SDL_TimerCallback callback);
# 94 "/usr/include/SDL/SDL_timer.h" 3 4
typedef Uint32 ( *SDL_NewTimerCallback)(Uint32 interval, void *param);


typedef struct _SDL_TimerID *SDL_TimerID;




extern __attribute__ ((visibility("default"))) SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_NewTimerCallback callback, void *param);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_RemoveTimer(SDL_TimerID t);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 114 "/usr/include/SDL/SDL_timer.h" 2 3 4
# 41 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/SDL_version.h" 1 3 4
# 30 "/usr/include/SDL/SDL_version.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 31 "/usr/include/SDL/SDL_version.h" 2 3 4


extern "C" {
# 42 "/usr/include/SDL/SDL_version.h" 3 4
typedef struct SDL_version {
 Uint8 major;
 Uint8 minor;
 Uint8 patch;
} SDL_version;
# 77 "/usr/include/SDL/SDL_version.h" 3 4
extern __attribute__ ((visibility("default"))) const SDL_version * SDL_Linked_Version(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 84 "/usr/include/SDL/SDL_version.h" 2 3 4
# 43 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 45 "/usr/include/SDL/SDL.h" 2 3 4


extern "C" {
# 69 "/usr/include/SDL/SDL.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_Init(Uint32 flags);


extern __attribute__ ((visibility("default"))) int SDL_InitSubSystem(Uint32 flags);


extern __attribute__ ((visibility("default"))) void SDL_QuitSubSystem(Uint32 flags);





extern __attribute__ ((visibility("default"))) Uint32 SDL_WasInit(Uint32 flags);




extern __attribute__ ((visibility("default"))) void SDL_Quit(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 93 "/usr/include/SDL/SDL.h" 2 3 4
# 42 "state.h" 2



# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4




typedef float float_t;
typedef double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();






extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();








extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();








extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();


extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();








extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();






extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();








extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();








extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();


extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();








extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();






extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();








extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();








extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();


extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();








extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 284 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 307 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 409 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 35 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[1] < 0;
}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 410 "/usr/include/math.h" 2 3 4
# 465 "/usr/include/math.h" 3 4
}
# 46 "state.h" 2





extern SDL_Surface * screen;






 static inline void FATAL(const char * string="Unknown", const char * string2="") { fprintf(stderr, "Fatal error: %s \"%s\"\n", string, string2); exit(0); }


class String
{
 int len;
 char* data;
public:
 void reserve(int i) { if (i<0) FATAL("-ve string length."); if (i<=len) return; len=i; data=(char*)realloc(data, (len+1)*sizeof(char)); }
 String() : len(0), data(__null) {}
 String(String const & s) : len(0), data(__null) { reserve(s.len); strcpy(data, s.data); }
 ~String() { free(data); }
 operator const char* () const {return data ? data : "";}
 void operator = (String const & a) { *this = (const char*)a; }
 void operator = (const char * a) { reserve(strlen(a)); strcpy(data, a); }
 void operator += (const char * a) { reserve(strlen(a)+len); strcat(data, a); }
 void truncate (int pos) { data[pos] = '\0'; }
 void fix_backslashes() { if(data) if (0) ; else for (int i=0; data[i]; i++) if (data[i]=='\\') data[i]='/'; }
};

class State
{
public:
 virtual ~State() {}

 virtual bool KeyPressed(int key, int mod) = 0;
 virtual void KeyReleased(int ) {};
 virtual void Mouse(int x, int y, int dx, int dy, int buttons_pressed, int buttons_released, int buttons) = 0;
 virtual void Update(double timedelta) = 0;
 virtual void Render() = 0;
 virtual void FileDrop(const char* filename) = 0;
 virtual void ScreenModeChanged() {};
};
# 129 "state.h"
class StateMakerBase
{
 static StateMakerBase* first;
 StateMakerBase* next;
 int key;
 bool start;
protected:
 State* state;
public:
 static State* current;

public:
 StateMakerBase(int key, bool start) : state(__null)
 {
  if (0) ; else for (StateMakerBase* s = first; s; s=s->next)
   if(key == s->key)
   {
    FATAL("Duplicate key in StateMakerBase::StateMakerBase");
    return;
   }
  this->key = key;
  this->start = start;
  next = first;
  first = this;
 }
 virtual ~StateMakerBase() {}
 virtual State* Create() = 0;
 void Destroy()
 {
  delete state;
  state = 0;
 }
 static State* GetNew(int k)
 {
  if (0) ; else for (StateMakerBase* s = first; s; s=s->next)
   if(k==s->key)
    return current = s->Create();
  return current;
 }
 static State* GetNew()
 {
  if (!first)
  {
   FATAL("StateMakerBase::GetNew - first is NULL");
   return 0;
  }
  if (0) ; else for (StateMakerBase* s = first; s; s=s->next)
   if(s->start)
    return current = s->Create();
  return current = first->Create();
 }
 static void DestroyAll()
 {
  if (0) ; else for (StateMakerBase* s = first; s; s=s->next)
   s->Destroy();
  current = 0;
 }
};

template<class X>
class StateMaker : public StateMakerBase
{
public:
 StateMaker(int key, bool start=false) : StateMakerBase(key, start)
 {}
 State* Create()
 {
  if (!state) state = new X;
  return state;
 }
};



extern int mouse_buttons, mousex, mousey, noMouse;
extern double stylusx, stylusy;
extern float styluspressure;
extern int stylusok;
extern int quitting;

char* LoadSaveDialog(bool save, bool levels, const char * title);
# 75 "hex_puzzzle.cpp" 2

# 1 "tiletypes.h" 1
# 25 "tiletypes.h"
  enum TileTypes {





EMPTY,
NORMAL,
COLLAPSABLE,
COLLAPSE_DOOR,
TRAMPOLINE,
SPINNER,
WALL,
COLLAPSABLE2,
COLLAPSE_DOOR2,
GUN,
TRAP,
COLLAPSABLE3,
BUILDER,
SWITCH,
FLOATING_BALL,
LIFT_DOWN,
LIFT_UP,




   NumTileTypes
  };
# 77 "hex_puzzzle.cpp" 2


# 1 "packfile.h" 1
# 20 "packfile.h"
# 1 "/usr/include/SDL/SDL_endian.h" 1 3 4
# 21 "packfile.h" 2
# 30 "packfile.h"
struct PackFile1
{
# 42 "packfile.h"
 class Entry {
  int32_t len;
 public:



  char name[1];

  Entry* GetNext()
  {
   return (Entry*)((char*)name + len);
  }

  void* Data()
  {
   char* pos = name;
   while (*pos!=0)
    pos++;
   return pos+1;
  }

  int DataLen()
  {
   return len - strlen(name) - 1;
  }
 }

   __attribute__ ((__packed__));
  int static_assert1[sizeof(Entry)==5 ? 0 : -1];




 int numfiles;
 Entry** e;
 void* data;

 PackFile1() : numfiles(0), e(0), data(0)
 {}

 Entry* Find(const char* name)
 {
  if (numfiles==0) return 0;
  int a=0, b=numfiles;
  while (b>a)
  {
   const int mid = (a+b)>>1;
   int diff = strcmp(name, e[mid]->name);
   if (diff==0)
    return e[mid];
   else if (diff < 0)
    b=mid;
   else
    a=mid+1;
  }
  return 0;
 }

 void Read(FILE* f)
 {
  if (numfiles || e || data)
   FATAL("Calling Packfile1::Read when already initialised.");

  int32_t size;
  fseek(f, -(int)sizeof(size), 2);
  int end_offset = ftell(f);
  fread(&size, sizeof(size), 1, f);
  size = (size);
  fseek(f, end_offset - size, 0);

  data = malloc(size);
  char* data_end = (char*)data + size;
  fread(data, 1, size, f);

  numfiles=0;
  Entry* i = (Entry*)data;
  while ((void*)i < data_end)
  {
   numfiles++;
   int32_t *data_length = (int32_t*)i;
   *data_length = (*data_length);
   i = i->GetNext();
  }

  e = new Entry* [numfiles];

  i = (Entry*)data;
  if (0) ; else for (int j=0; j<numfiles; j++, i = i->GetNext())
   e[j] = i;
 }

 ~PackFile1()
 {
  free(data);
 }

};
# 80 "hex_puzzzle.cpp" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 1 3 4
# 11 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 1 3 4
# 122 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/x86_64-linux-gnu/4.3.2/include-fixed/limits.h" 2 3 4
# 84 "hex_puzzzle.cpp" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 105 "/usr/include/sys/stat.h" 3 4
extern "C" {

# 1 "/usr/include/bits/stat.h" 1 3 4
# 43 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 88 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 103 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];
# 112 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];



  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 209 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) throw () __attribute__ ((__nonnull__ (2)));
# 228 "/usr/include/sys/stat.h" 3 4
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) throw () __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));
# 252 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));






extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
# 274 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) throw ();





extern int fchmodat (int __fd, __const char *__file, __mode_t mode, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));






extern __mode_t umask (__mode_t __mask) throw ();




extern __mode_t getumask (void) throw ();



extern int mkdir (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     throw () __attribute__ ((__nonnull__ (1)));






extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) throw () __attribute__ ((__nonnull__ (2)));




extern int mkfifo (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     throw () __attribute__ ((__nonnull__ (2)));





extern int futimens (int __fd, __const struct timespec __times[2]) throw ();
# 397 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));
# 430 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) throw () __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     throw () __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
stat (__const char *__path, struct stat *__statbuf) throw ()
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat (__const char *__path, struct stat *__statbuf) throw ()
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat (int __fd, struct stat *__statbuf) throw ()
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat (int __fd, __const char *__filename, struct stat *__statbuf, int __flag) throw ()

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknod (__const char *__path, __mode_t __mode, __dev_t __dev) throw ()
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknodat (int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) throw ()

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
stat64 (__const char *__path, struct stat64 *__statbuf) throw ()
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat64 (__const char *__path, struct stat64 *__statbuf) throw ()
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat64 (int __fd, struct stat64 *__statbuf) throw ()
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat64 (int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag) throw ()

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}






}
# 85 "hex_puzzzle.cpp" 2






void RenderTile(bool reflect, int t, int x, int y, int cliplift=-1);

int keyState[SDLK_LAST] = {0};

FILE *file_open( const char *file, const char *flags )
{

 extern String base_path;
 static String filename;
 if (file[0]=='/')
  filename = "";
 else
 {
  if (strncmp(file, "save", 4) == 0)
  {
   const char *home = getenv("HOME");
   if (home)
   {
    char save_path[4096];
    snprintf(save_path, sizeof(save_path), "%s/.hex-a-hop", home);
    if (!strchr(flags, 'r'))
     if (mkdir(save_path, (0400|0200|0100) | ((0400|0200|0100) >> 3) | ((0400 >> 3) >> 3) | ((0100 >> 3) >> 3)) != -1)
      printf("Creating directory \"%s\"\n", (const char *)save_path);
    strncat(save_path, "/", sizeof(save_path));
    filename = save_path;
   }
   else filename = "/tmp/";
  }
  else filename = base_path;
 }
 filename += file;


 filename.fix_backslashes();
 FILE* f = fopen( filename, flags );

 if (!f && strncmp(file, "save", 4) != 0)
 {
  printf("Warning: unable to open file \"%s\" for %s\n", (const char*)filename, strchr(flags, 'r') ? "reading" : "writing");
 }

 return f;
}
# 177 "hex_puzzzle.cpp"
# 1 "gfx_list.h" 1
# 21 "gfx_list.h"
SDL_Surface* gradient = 0;
SDL_Surface* mapBG = 0;
SDL_Surface* mapBG2 = 0;
SDL_Surface* tileGraphics = 0;
SDL_Surface* tileGraphicsR = 0;
SDL_Surface* girlGraphics = 0;
SDL_Surface* titlePage = 0;
# 178 "hex_puzzzle.cpp" 2
int scrollX=0, scrollY=0, initScrollX=0, initScrollY=0;
int mapRightBound = 0;
int mapScrollX = 0;
bool showScoring = false;
bool hintsDone = false;

enum {
 TILE_SPLASH_1 = 17,
 TILE_SPLASH_2,
 TILE_SPLASH_3,

 TILE_SPHERE = 20,
 TILE_SPHERE_OPEN,
 TILE_SPHERE_DONE,
 TILE_SPHERE_PERFECT,
 TILE_LOCK,

 TILE_LIFT_BACK,
 TILE_LIFT_FRONT,
 TILE_LIFT_SHAFT,
 TILE_BLUE_FRONT,
 TILE_GREEN_FRONT,

 TILE_LINK_0 = 30,
 TILE_LINK_1,
 TILE_LINK_2,
 TILE_LINK_3,
 TILE_LINK_4,
 TILE_LINK_5,
 TILE_GREEN_FRAGMENT,
 TILE_GREEN_FRAGMENT_1,
 TILE_GREEN_FRAGMENT_2,
 TILE_ITEM2,

 TILE_WATER_MAP = 40,
 TILE_GREEN_CRACKED,
 TILE_GREEN_CRACKED_WALL,
 TILE_BLUE_CRACKED,
 TILE_BLUE_CRACKED_WALL,
 TILE_LASER_HEAD,
 TILE_FIRE_PARTICLE_1,
 TILE_FIRE_PARTICLE_2,
 TILE_WATER_PARTICLE,

 TILE_LASER_0 = 50,
 TILE_LASER_FADE_0 = 53,
 TILE_BLUE_FRAGMENT = 56,
 TILE_BLUE_FRAGMENT_1,
 TILE_BLUE_FRAGMENT_2,
 TILE_ITEM1,
 TILE_LASER_REFRACT = 60,
 TILE_ICE_LASER_REFRACT = TILE_LASER_REFRACT+6,
 TILE_WHITE_TILE,
 TILE_WHITE_WALL,
 TILE_BLACK_TILE,

};

const int colours[] = {

# 1 "tiletypes.h" 1
# 31 "tiletypes.h"
0x202060,
0x506070,
0x408040,
0xa0f0a0,
0x603060,
0x784040,
0x000080,
0x408080,
0xa0f0f0,
0xb0a040,
0x000000,
0x202020,
0x009000,
0x004000,
0xa00050,
0x7850a0,
0x7850a0,
# 239 "hex_puzzzle.cpp" 2
};

const int tileSolid[] = {

# 1 "tiletypes.h" 1
# 31 "tiletypes.h"
-1,
0,
0,
1,
0,
0,
1,
0,
1,
0,
0,
0,
0,
0,
0,
0,
1,
# 244 "hex_puzzzle.cpp" 2
};

void ChangeSuffix(char* filename, char* newsuffix)
{
 int len = strlen(filename);
 int i = len-1;
 while (i>=0 && filename[i]!='\\' && filename[i]!='.' && filename[i]!='/')
  i--;
 if (filename[i]=='.')
  strcpy(filename+i+1, newsuffix);
 else
 {
  strcat(filename, ".");
  strcat(filename, newsuffix);
 }
}

bool isMap=false, isRenderMap=false;
int isFadeRendering=0;
# 310 "hex_puzzzle.cpp"
SDL_Rect tile[2][70];
short tileOffset[2][70][2];
int Peek(SDL_Surface* i, int x, int y)
{
 if (x<0 || y<0 || x>=i->w || y>=i->h)
  return 0;
 unsigned int p=0;
 const int BytesPerPixel = i->format->BytesPerPixel;
 const int BitsPerPixel = i->format->BitsPerPixel;
 if (BitsPerPixel==8)
  p = ((unsigned char*)i->pixels)[i->pitch*y + x*BytesPerPixel];
 else if (BitsPerPixel==15 || BitsPerPixel==16)
  p = *(short*)(((char*)i->pixels) + (i->pitch*y + x*BytesPerPixel));
 else if (BitsPerPixel==32)
  p = *(unsigned int*)(((char*)i->pixels) + (i->pitch*y + x*BytesPerPixel));
 else if (BitsPerPixel==24)
  p = (int)((unsigned char*)i->pixels)[i->pitch*y + x*BytesPerPixel]
    | (int)((unsigned char*)i->pixels)[i->pitch*y + x*BytesPerPixel] << 8
    | (int)((unsigned char*)i->pixels)[i->pitch*y + x*BytesPerPixel] << 16;

 return p;
}
bool IsEmpty(SDL_Surface* im, int x, int y, int w, int h)
{
 if (0) ; else for (int i=x; i<x+w; i++)
  if (0) ; else for (int j=y; j<y+h; j++)
   if (Peek(im,i,j) != Peek(im,0,im->h-1))
    return false;
 return true;
}

void MakeTileInfo()
{
 if (0) ; else for (int i=0; i<140; i++)
 {
  SDL_Rect r = {(i%10)*64, ((i/10)%7)*64, 64, 64};
  short * outOffset = tileOffset[i/70][i%70];
  SDL_Surface * im = (i/70) ? tileGraphicsR : tileGraphics;

  outOffset[0] = outOffset[1] = 0;

  while (r.h>1 && IsEmpty(im, r.x, r.y, r.w, 1)) r.h--, r.y++, outOffset[1]++;
  while (r.h>1 && IsEmpty(im, r.x, r.y+r.h-1, r.w, 1)) r.h--;
  while (r.w>1 && IsEmpty(im, r.x, r.y, 1, r.h)) r.w--, r.x++, outOffset[0]++;
  while (r.w>1 && IsEmpty(im, r.x+r.w-1, r.y, 1, r.h)) r.w--;

  tile[i/70][i%70] = r;
 }
}

void ConvertToUTF8(const std::string &text_locally_encoded, char *text_utf8, size_t text_utf8_length)
{

 size_t text_length = text_locally_encoded.length()+1;
 (*__errno_location ()) = 0;
 static const char *locale_enc = gettext_init.GetEncoding();
 iconv_t cd = iconv_open("UTF-8", locale_enc);
 char *in_buf = const_cast<char *>(&text_locally_encoded[0]);
 char *out_buf = &text_utf8[0];
 iconv(cd, &in_buf, &text_length, &out_buf, &text_utf8_length);
 iconv_close(cd);
 if ((*__errno_location ()) != 0)
  std::cerr << "An error occurred recoding " << text_locally_encoded << " to UTF8" << std::endl;
}

int SDLPangoTextWidth(const std::string &text_utf8);
void Print_Pango(int x, int y, const std::string &text_utf8);
void Print_Pango_Aligned(int x, int y, int width, const std::string &text_utf8, int align);



void Print(int x, int y, const char * string, ...)
{
 va_list marker;
 __builtin_va_start(marker,string);

 char tmp[1000], tmp_utf8[5000];
 vsprintf((char*)tmp, string, marker);

 ConvertToUTF8(tmp, tmp_utf8, sizeof(tmp_utf8)/sizeof(char));
 Print_Pango(x, y, tmp_utf8);

 __builtin_va_end(marker);
}



void PrintR(int x, int y, const char * string, ...)
{
 va_list marker;
 __builtin_va_start(marker,string);

 char tmp[1000], tmp_utf8[5000];
 vsprintf((char*)tmp, string, marker);

 ConvertToUTF8(tmp, tmp_utf8, sizeof(tmp_utf8)/sizeof(char));
 Print_Pango(x-SDLPangoTextWidth(tmp_utf8), y, tmp_utf8);

 __builtin_va_end(marker);
}





void Print_Aligned(bool split, int x, int y, int width, const char * string, int align)
{
 char tmp_utf8[5000];

 ConvertToUTF8(string, tmp_utf8, sizeof(tmp_utf8)/sizeof(char));

 std::string msg(tmp_utf8);
 while (split && msg.find("  ") != std::string::npos)
  msg.replace(msg.find("  "), 2, "\n");

 Print_Pango_Aligned(x, y, width, msg, align);
}

void PrintC(bool split, int x, int y, const char * string, ...)
{
 va_list marker;
 __builtin_va_start(marker,string);

 char tmp[1000];
 vsprintf((char*)tmp, string, marker);

 __builtin_va_end(marker);

 static bool print = true;
 if (print) {
  std::cerr << "Warning: don't know window width for message:\n" << tmp << "\n";
  if (0) ; else for (unsigned int i=0; i<strlen(tmp); ++i)
   if (!std::isspace(tmp[i]))
    print = false;
 }
 Print_Aligned(split, x, y, 2*std::min(x, 640 -x), tmp, 1);
}

# 1 "savestate.h" 1
# 20 "savestate.h"
struct HexPuzzle;

class LevelSave
{
 friend struct HexPuzzle;





 char * bestSolution;
 int32_t bestSolutionLength;
 int32_t bestScore;

 int32_t lastScores[19];
 int32_t unlocked;
public:
 LevelSave()
 {
  Clear();
 }
 void Clear()
 {
  unlocked = 0;
  bestSolution = 0;
  bestScore = 0;
  bestSolutionLength = 0;
  memset(lastScores, 0, sizeof(lastScores));
 }
 void LoadSave(FILE* f, bool save)
 {
  typedef unsigned int _fn(void*, unsigned int, unsigned int, FILE*);
  _fn * fn = save ? (_fn*)fwrite : (_fn*)fread;


  bestSolutionLength = (bestSolutionLength);
  bestScore = (bestScore);
  if (0) ; else for (int i=0; i<19; ++i)
   lastScores[i] = (lastScores[i]);
  unlocked = (unlocked);

  fn(&bestSolutionLength, sizeof(bestSolutionLength), 1, f);
  fn(&bestScore, sizeof(bestScore), 1, f);
  fn(&lastScores, sizeof(lastScores), 1, f);
  fn(&unlocked, sizeof(unlocked), 1, f);

  bestSolutionLength = (bestSolutionLength);
  bestScore = (bestScore);
  if (0) ; else for (int i=0; i<19; ++i)
   lastScores[i] = (lastScores[i]);
  unlocked = (unlocked);

  if (bestSolutionLength)
  {
   if (!save) SetSolution(bestSolutionLength);
   fn(bestSolution, sizeof(bestSolution[0]), bestSolutionLength, f);
  }
 }

 void Dump()
 {
  if (0) ; else for (int j=1; j<19; j++)
   if (lastScores[j]==lastScores[0])
    lastScores[j] = 0;




 }
 bool Completed()
 {
  return bestScore != 0;
 }
 bool IsNewCompletionBetter(int score)
 {
  if (0) ; else for (int i=0; i<19; i++)
  {
   if (lastScores[i]==0)
    lastScores[i] = score;
   if (lastScores[i]==score)
    break;
  }

  if (!Completed())
   return true;

  return score <= bestScore;
 }
 bool BeatsPar(int par)
 {
  if (!Completed())
   return false;
  return bestScore < par;
 }
 bool PassesPar(int par)
 {
  if (!Completed())
   return false;
  return bestScore <= par;
 }
 int GetScore()
 {
  return bestScore;
 }
 void SetScore(int s)
 {
  bestScore = s;
 }
 void SetSolution(int l) {
  delete [] bestSolution;
  bestSolutionLength = l;
  bestSolution = new char [ l ];
 }
 void SetSolutionStep(int pos, int val)
 {
  bestSolution[pos] = val;
 }
};

class SaveState
{
 struct X : public LevelSave
 {
  X* next;
  char* name;

  X(const char* n, X* nx=0) : next(nx)
  {
   name = new char[strlen(n)+1];
   strcpy(name, n);
  }
  ~X()
  {
   delete [] name;
  }
 };

 struct General {

  void SwapBytes()
  {
   scoringOn = (scoringOn);
   hintFlags = (hintFlags);
   completionPercentage = (completionPercentage);
   endSequence = (endSequence);
   masteredPercentage = (masteredPercentage);
   if (0) ; else for (unsigned int i=0; i<sizeof(pad)/sizeof(int32_t); ++i)
    pad[i] = (pad[i]);
  }
  int32_t scoringOn;
  int32_t hintFlags;
  int32_t completionPercentage;
  int32_t endSequence;
  int32_t masteredPercentage;
  int32_t pad[6];
 };

 X* first;

 void ClearRaw()
 {
  memset(&general, 0, sizeof(general));
  general.hintFlags = 1<<31 | 1<<30;

  X* x=first;
  while (x)
  {
   X* nx = x->next;
   delete x;
   x = nx;
  }
  first = 0;

 }

public:

 General general;


 SaveState() : first(0)
 {
  Clear();
 }

 ~SaveState()
 {
  ClearRaw();
 }

 void Clear()
 {
  ClearRaw();
  ApplyStuff();
 }

 void GetStuff();
 void ApplyStuff();

 void LoadSave(FILE* f, bool save)
 {
  if (save)
  {
   GetStuff();



   fputc('2', f);
   general.SwapBytes();
   fwrite(&general, sizeof(general), 1, f);
   general.SwapBytes();
   if (0) ; else for(X* x=first; x; x=x->next)
   {
    int16_t len = strlen(x->name);
    len = (len);
    fwrite(&len, sizeof(len), 1, f);
    len = (len);
    fwrite(x->name, 1, len, f);

    x->LoadSave(f,save);

    if (x->Completed())
    {

     x->Dump();
    }
   }
  }
  else
  {
   ClearRaw();
   int v = fgetc(f);
   if (v=='2')
   {
    fread(&general, sizeof(general), 1, f);
    general.SwapBytes();
    v = '1';
   }
   if (v=='1')
   {
    while(!feof(f))
    {
     char temp[1000];
     int16_t len;
     fread(&len, sizeof(len), 1, f);
     len = (len);
     if (feof(f)) break;
     fread(temp, len, 1, f);
     temp[len] = 0;
     first = new X(temp, first);

     first->LoadSave(f,save);
    }
   }

   ApplyStuff();
  }
 }

 LevelSave* GetLevel(const char * name, bool create)
 {
  char * l = strstr(name, "Levels");
  if (l)
   name = l;

  X* x = first;
  if (x && strcmp(name, x->name)==0) return x;
  while (x && x->next)
  {
   if (strcmp(name, x->next->name)==0) return x->next;
   x = x->next;
  }
  if (create)
  {
   X* n = new X(name);
   if (x)
    x->next = n;
   else
    first = n;
   return n;
  }
  else
  {
   return 0;
  }
 }
};
# 449 "hex_puzzzle.cpp" 2
# 1 "menus.h" 1
# 21 "menus.h"
struct Menu;
Menu* activeMenu = 0;
Menu* deadMenu = 0;

int SDLPangoTextHeight(const std::string &text_utf8, int width);

static void HackKeyPress(int key, int mod)
{
 int k = keyState[key];
 StateMakerBase::current->KeyPressed(key, mod);
 keyState[key] = k;
}

struct Menu {
 bool renderBG;

 Menu() : renderBG(true), under(activeMenu), time(0) { activeMenu = this; }

 virtual ~Menu() {
  if(this!=deadMenu) FATAL("this!=deadMenu");
  deadMenu=under;
 }

 static void Pop()
 {
  if (!activeMenu) return;
  Menu* m = activeMenu;
  activeMenu = activeMenu->under;
  m->under = deadMenu;
  deadMenu = m;
 }

 virtual bool KeyPressed(int key, int )
 {
  if (key=='w' || key==SDLK_UP || key==SDLK_KP8 || key=='q' || key=='e' || key==SDLK_KP7 || key==SDLK_KP9)
   Move(-1), noMouse=1;
  else if (key=='s' || key==SDLK_DOWN || key==SDLK_KP2 || key=='a' || key=='d' || key==SDLK_KP1 || key==SDLK_KP3)
   Move(1), noMouse=1;
  else if (key==' ' || key==SDLK_RETURN)
  {
   Select();
   noMouse=1;
  }
  else if (key==SDLK_ESCAPE || key==SDLK_BACKSPACE || key==SDLK_KP_PERIOD || key==SDLK_DELETE)
   Cancel();
  else
   return false;
  return true;
 }
 virtual void Mouse(int , int , int , int , int buttons_pressed, int , int )
 {
  if (buttons_pressed==4 || buttons_pressed==2)
   Cancel();
 }

 virtual void Move(int ) {}
 virtual void Select() {}
 virtual void Cancel() {}

 virtual void Update(double timedelta) {time+=timedelta;}
 virtual void Render() = 0;

 Menu * under;
 double time;
};

const char * hint[] = {


gettext ("Basic controls:|Move around with the keys Q,W,E,A,S,D or the numeric  keypad. Alternatively, you can use the mouse and  click on the tile you'd like to move to.    Use 'U', backspace or the right mouse button to  undo mistakes.    The 'Esc' key (or middle mouse button) brings up a  menu from which you can restart if you get stuck."),

0,

gettext ("Objective:|Your goal is to break all the green tiles.    You mainly do this by jumping on them.    They will crack when you land on them, and  only disintegrate when you jump off.    Try not to trap yourself!"),

gettext ("The coloured walls flatten themselves when there  are no matching coloured tiles remaining."),

gettext ("You can bounce on the purple trampoline tiles to  get around.    But try not to fall in the water.    If you do, remember you can undo with 'U',  backspace or the right mouse button!"),

gettext ("A red spinner tile will rotate the pieces around  it when you step on it."),

0,

gettext ("You don't need to destroy blue tiles to complete  the level.    But they'll turn green when you step off them, and  you know what you have to do to green tiles..."),

0,

gettext ("Yellow laser tiles fire when you step on them.    Shooting other laser tiles is more destructive."),

gettext ("Ice is slippery!    Please be careful!!"),

0,

gettext ("The dark grey tiles with arrows on are builders.    Landing on one creates green tiles in any adjacent  empty tile, and turns green tiles into walls."),

0,


gettext ("You can ride on the pink floating boats to get  across water.    They'll pop if you try and float off the edge of the  screen though, so look where you're going."),

gettext ("The blue lifts go up or down when you land on them."),

0,

0,0,0,0,

gettext ("The spiky anti-ice pickups turn icy tiles into blue ones.    They get used automatically when you land on ice."),



gettext ("Collecting the golden jump pickups will allow you to  do a big vertical jump.    Try it out on different types of tiles.    Use the space bar or return key to jump. Or click  on the tile you're currently on with the mouse."),

0,0,


gettext ("Map Screen:|You can choose which level to attempt next from  the map screen.    Silver levels are ones you've cleared.    Black levels are ones you haven't completed yet,  but are available to play."),





gettext ("New feature unlocked!|Each level has an efficiency target for you to try  and beat.    Every move you make and each non-green tile  you destroy counts against you.    Why not try replaying some levels and going  for gold?"),

0,0,0,


gettext ("Thanks for playing this little game.    I hope you  enjoy it!    -- --    All content is Copyright 2005 Tom Beaumont    email: tombeaumont@yahoo.com  Any constructive criticism gratefully received!"),





gettext ("Welcome to " "Hex-a-hop" "!    This is a puzzle game based on hexagonal tiles.  There is no time limit and no real-time element, so  take as long as you like.    Use the cursor keys or click on the arrows to  scroll through the help pages. More pages will be  added as you progress through the game."),
};

struct HintMessage : public Menu
{
 static int flags;

 SDL_Rect InnerTextWindowRect;
 SDL_Rect OuterTextWindowRect;
 const char * msg;
 char title[500];
 int state;

 const SDL_Rect &GetInnerWindowRect() const
 {
  return InnerTextWindowRect;
 }

 const SDL_Rect &GetOuterWindowRect() const
 {
  return OuterTextWindowRect;
 }

 static bool FlagTile(int t, bool newStuff=true)
 {
  if (t==LIFT_UP) t=LIFT_DOWN;
  if (newStuff && (flags & (1<<t))) return false;
  if (!newStuff && !(flags & (1<<t))) return false;
  if (t>31) return false;
  if (!hint[t]) return false;

  flags |= 1<<t;
  new HintMessage(hint[t]);
  return true;
 }

 HintMessage(const char * m) { Init(m); }

 void Init(const char * m)
 {
  state = 0; time = 0;
  memset(title, 0, sizeof(title));
  char * x = strstr(m, "|");
  if (!x)
  {
   msg = m;
   strcpy(title, gettext ("Info:"));
  }
  else
  {
   strncpy(title, m, x-m);
   msg=x+1;
  }

  char msg_utf8[5000];
  ConvertToUTF8(msg, msg_utf8, sizeof(msg_utf8)/sizeof(char));

  std::string text(msg_utf8);
  while (text.find("  ") != std::string::npos)
   text.replace(text.find("  "), 2, "\n");

  InnerTextWindowRect.w = 640 -18*2;
  InnerTextWindowRect.h = SDLPangoTextHeight(text, InnerTextWindowRect.w - 2*25);
  InnerTextWindowRect.h += 25;
  OuterTextWindowRect = InnerTextWindowRect;
  OuterTextWindowRect.w += 4;
  OuterTextWindowRect.h += 25 +4;
 }

 virtual void Render()
 {
  int y = 480/4 + int(480*((1-time*5)>(0) ? (1-time*5) : (0))*3/4);
  if (state)
   y = 480/4 + int(480*(-time*5)*3/4);

  Render(0, y);

  if (!state && time>0.2)
   PrintR(640 -25, 480 -25, gettext ("Press any key"));
 }

 void Render(int x, int y)
 {




  InnerTextWindowRect.x = x+18;
  InnerTextWindowRect.y = y;
  OuterTextWindowRect.x = InnerTextWindowRect.x-2;
  OuterTextWindowRect.y = InnerTextWindowRect.y-2-25;

  SDL_Rect r2 = InnerTextWindowRect;
  SDL_Rect r = OuterTextWindowRect;
  SDL_FillRect(screen, &r, SDL_MapRGB(screen->format, 60,90,90));
  SDL_FillRect(screen, &r2, SDL_MapRGB(screen->format, 20,50,50));
  Print(OuterTextWindowRect.x+25/4, y-25, "%s", title);



  std::string alignment = gettext ("text alignment");
  if (alignment == "right")
   Print_Aligned(true, InnerTextWindowRect.x + InnerTextWindowRect.w - 25, y+25/2, InnerTextWindowRect.w - 2*25, msg, 2);
  else if (alignment == "left")
   Print_Aligned(true, InnerTextWindowRect.x + 25, y+25/2, InnerTextWindowRect.w - 2*25, msg, 0);
  else
   Print_Aligned(true, x+640/2, y+25/2, InnerTextWindowRect.w - 2*25, msg, 1);
 }

 virtual void Mouse(int , int , int , int , int buttons_pressed, int , int )
 {
  if (buttons_pressed && state==0 && time>0.2)
   state = 1, time=0;
 }

 bool KeyPressed(int , int )
 {
  if (state==0 && time>0.2)
   state = 1, time=0;
  return true;
 }

 virtual void Update(double timedelta)
 {
  Menu::Update(timedelta);
  if(state && time > 0.2)
   Pop();
 }
};

int HintMessage::flags = 1<<31 | 1<<30;

struct HintReview : public HintMessage
{
 int page;
 int page_dir;
 int page_count;
 int page_display;
 HintReview() : HintMessage(hint[31]), page(31), page_dir(0), page_display(0)
 {
  page_count=0;
  if (0) ; else for (int i=0; i<32; i++)
   if (flags & (1<<i))
    page_count++;
 }

 void Cancel() { Pop(); }
 void Select() { Pop(); }


 virtual void Mouse(int x, int y, int dx, int dy, int buttons_pressed, int buttons_released, int buttons)
 {
  if (buttons_pressed==1)
  {
   if (y < 480/4-25 +2)
    Move(-1);
   else if (y > HintMessage::GetOuterWindowRect().y+
     HintMessage::GetOuterWindowRect().h)
    Move(1);
   else
    Cancel();
  }
  else if (buttons_pressed==8)
   Move(-1);
  else if (buttons_pressed==16)
   Move(1);
  else
   Menu::Mouse(x,y,dx,dy,buttons_pressed, buttons_released, buttons);
 }

 bool KeyPressed(int key, int mod)
 {
  if (key==SDLK_LEFT)
   Move(-1);
  else if (key==SDLK_RIGHT)
   Move(1);
  else
   return Menu::KeyPressed(key, mod);
  return true;
 }

 virtual void Render()
 {
  const double SPD = 10;




  sprintf (title, gettext ("Help (Page %d/%d)"), page_display+1, page_count);


  int y=480/4;
  if (state==0)
   y = 480/4+int(((0)>(time*SPD) ? (0) : (time*SPD))*-page_dir*480);
  if (state==1)
   y = 480/4+int(((0)>(1-time*SPD) ? (0) : (1-time*SPD))*page_dir*480);


  {
   PrintC(false, 640/2, y-25*2, "^");
   PrintC(false, 640/2, HintMessage::GetOuterWindowRect().y+
     HintMessage::GetOuterWindowRect().h, "_");
  }

  HintMessage::Render(0,y);

  if (time > 1.0/SPD && page_dir && state==0)
  {
   do {
    page = (page+page_dir) & 31;



   } while (hint[page]==0 || !(flags&(1<<page)));
   Init(hint[page]);

   page_display = (page_display + page_count + page_dir) % page_count;

   time = 0;
   state=1;
  }
  if (time>1.0/SPD && state==1)
   state=0, page_dir = 0;
 }
 virtual void Update(double timedelta)
 {
  Menu::Update(timedelta);
 }
 void Move(int dir)
 {
  if (page_dir)
   return;
  time = 0;
  page_dir = dir;
  state = 0;
 }
};


enum option {
 OPT_GAMESLOT_0,
 OPT_GAMESLOT_LAST = OPT_GAMESLOT_0 + 4 - 1,
 OPT_RESUME,
 OPT_RESTART,
 OPT_GOTO_MAP,
 OPT_GOTO_MAP_CONTINUE,
 OPT_FULLSCREEN,
 OPT_OPTIONS,
 OPT_QUIT,
 OPT_QUIT_CONFIRM,
 OPT_QUIT_CANCEL,
 OPT_QUIT_MENU_CONFIRM,
 OPT_HELP,
 OPT_GAMESLOT_NEW,
 OPT_DELETE_CONFIRM,
 OPT_DELETE_CANCEL,
 OPT_UNDO,
 OPT_BACK,
 OPT_END, OPT_END2,
};

char optionSlotName[4][400] = { {0} };
char currentSlot[800] = "";
int freeSlot = -1;
char* GetSlotName(int i, char * t)
{
  sprintf(t, "save%d.dat", i+1);
  return t;
}

char * optionString[] = {
 optionSlotName[0],
 optionSlotName[1],
 optionSlotName[2],
 optionSlotName[3],
 gettext ("Resume"),
 gettext ("Restart Level"),
 gettext ("Return to Map"),
 gettext ("Continue"),
 gettext ("Toggle Fullscreen"),
 gettext ("Options"),
 gettext ("Quit"),
 gettext ("Yes"),
 gettext ("No"),
 gettext ("Return to Title"),
 gettext ("Help"),
 gettext ("Start New Game"),
 gettext ("Yes, really delete it!"),
 gettext ("Don't do it!"),
 gettext ("Undo Last Move"),
 gettext ("OK"),
 gettext ("View Credits Sequence"), gettext ("View Credits Sequence"),
};


struct OptMenu : public Menu
{
 int select;
 int num_opt;
 int opt[10];
 bool left_align;
 const char * title;
 SDL_Rect r, r2;

 OptMenu(const char * t) : select(0), title(t)
 {
  left_align = false;
  num_opt = 0;
 }

 void Init()
 {
  r.w=640/2;
  r.x=(640 -r.w)/2;
  r.y=480/3;

  r2 = r;

  const int SPACE = int(25 * 1.5);

  r2.h = SPACE*num_opt + 25/2;
  r.h = r2.h + (25 +2*2);
  r.y -= 25 +2;
  r.w += 2*2;
  r.x -= 2;
 }

 void RenderOption(int o, const char * s)
 {
  int y = r2.y + 25/2 + int(25 * 1.5) * o;
  if (left_align)
  {
   int x = r.x + SDLPangoTextWidth(" ");
   int x1 = x + SDLPangoTextWidth("> ");
   if (select==o)
   {


    Print(x, y, "> %s", s);
   }
   else
   {
    Print(x1, y, "%s", s);
   }
  }
  else
  {
   int x = r.x + r.w/2;
   if (select==o)
   {


    PrintC(false, x, y, "> %s <", s);
   }
   else
   {
    PrintC(false, x, y, "%s", s);
   }
  }
 }

 void Move(int dir)
 {
  select += dir;
  if (select<0) select = num_opt-1;
  if (select>=num_opt) select = 0;
 }
 virtual void Mouse(int x, int y, int dx, int dy, int buttons_pressed, int buttons_released, int buttons)
 {
  if (1)
  {
   if (x<r2.x || y<r2.y || x>r2.x+r2.w || y>r2.y+r2.h)
   {
    if (buttons_pressed!=4 && buttons_pressed!=2)
     return;
   }
   else
   {
    select = (y-r2.y-25/3) / int(25*1.5);
    if (select<0) select = 0;
    if (select>=num_opt) select = num_opt-1;
   }
  }
  if (buttons_pressed==1)
   Select();
  Menu::Mouse(x, y, dx, dy, buttons_pressed, buttons_released, buttons);
 }
 void Select();

 void Render()
 {
  RenderBG();
  RenderTitle();
  RenderOptions();
 }
 void RenderBG()
 {
  SDL_FillRect(screen, &r, SDL_MapRGB(screen->format, 60,90,90));
  SDL_FillRect(screen, &r2, SDL_MapRGB(screen->format, 20,50,50));
 }
 void RenderTitle()
 {
  if (left_align)
   Print(r2.x+SDLPangoTextWidth(" "), r.y+4, title);
  else
   PrintC(false, r2.x+r2.w/2, r.y+4, title);
 }
 void RenderOptions()
 {
  if (0) ; else for (int i=0; i<num_opt; i++)
   RenderOption(i, optionString[opt[i]]);
 }
 void Cancel()
 {
  Pop();
 }
};

struct WinLoseScreen : public OptMenu
{
 bool win;
 int score, par, best_score;
 WinLoseScreen(bool _win, int _score=0, int _par=0, int _prev_score=0) :
  OptMenu(_win ? gettext ("Level Complete!") : gettext ("Emi can't swim...")),
  win(_win),
  score(_score),
  par(_par),
  best_score(_prev_score)
 {
  if (!win)
   opt[num_opt++] = OPT_UNDO;
  if (!win)
   opt[num_opt++] = OPT_RESTART;
  opt[num_opt++] = win ? OPT_GOTO_MAP_CONTINUE : OPT_GOTO_MAP;

  Init();

  if (win)
  {
   r.h += 25 * 3 + 25/2;
   r2.h += 25 * 3 + 25/2;
  }
 }

 void Render()
 {
  OptMenu::RenderBG();
  OptMenu::RenderTitle();

  if (win)
   r2.y += 25 * 3 + 25/2;

  OptMenu::RenderOptions();

  if (win)
   r2.y -= 25 * 3 + 25/2;

  if (win)
  {
   int x = r.x+r.w/2;
   int y = r2.y + 25/2;
   if (score < best_score && score <= par)
    PrintC(true, x, y, gettext ("New Best Score: %d  Par Score: %d  Par Beaten!"), score, par);
   else if (score < best_score)
    PrintC(true, x, y, gettext ("New Best Score: %d  Par Score: %d"), score, par);
   else if (par && best_score)
    PrintC(true, x, y, gettext ("Score: %d  Previous Best: %d  Par Score: %d"), score, best_score, par);
   else
    PrintC(true, x, y+25/2, gettext ("Well Done!  Level Completed!"));
  }
 }

 static void Undo()
 {
  Pop();
  HackKeyPress('z', 0);
 }
 bool KeyPressed(int key, int mod)
 {
  if (key=='z' || key=='u' || key==SDLK_DELETE || key==SDLK_BACKSPACE)
   return Undo(), true;
  if (key=='r' && (mod & (KMOD_LCTRL|KMOD_RCTRL)))
  {
   Pop();
   HackKeyPress(key, mod);
   return true;
  }
  return OptMenu::KeyPressed(key, mod);
 }
 virtual void Mouse(int x, int y, int dx, int dy, int buttons_pressed, int buttons_released, int buttons)
 {
  if (buttons_pressed==4)
  {
   Undo();
   return;
  }

  OptMenu::Mouse(x, y, dx, dy, buttons_pressed, buttons_released, buttons);
 }
 void Cancel()
 {
  if (win)
   select=0, Select();
  else
   Undo();
 }
};

struct OptMenuTitle : public OptMenu
{
 OptMenuTitle(const char * t) : OptMenu(t)
 {
  renderBG = false;

 }

 void Render()
 {
  SDL_Rect a = {0,0,640,480};



  SDL_UpperBlit(titlePage, &a, screen, &a);

  OptMenu::RenderTitle();
  OptMenu::RenderOptions();
 }

 void Init()
 {
  OptMenu::Init();

  int xw = 640/6;
  r.w += xw; r2.w+=xw;
  int x = 640 - r.x - r.w;
  int y = 480 - r.y - r.h + 25/4;
  r.x += x; r2.x += x;
  r.y += y; r2.y += y;
  r.w+=20; r2.w+=20; r.h+=20; r2.h+=20;

  r.h = r2.h = 480;
  r2.y = 480/2;
  r.y = r2.y - 25 - 2;
 }
};

const char *ending[] = {
 gettext (" Very Well Done! "),
 "", "", "", "", "", "",

 "", "", "*15,4", "", "",

 gettext ("All Levels Cleared!"),

 "", "", "*5,7", "", "",

 gettext ("Not a single green hexagon is left unbroken."),
 "",
 gettext ("Truly, you are a master of hexagon hopping!"),

 "", "", "*9,10", "", "",

 "", gettext ("Credits"), "", "", "",
 gettext ("<Design & Direction:"), ">Tom Beaumont", "", "",
 gettext ("<Programming:"), ">Tom Beaumont", "", "",
 gettext ("<Graphics:"), ">Tom Beaumont", "", "",
 gettext ("<Thanks to:"), ">Kris Beaumont", "", "",

 gettext ("<Tools and libraries used:"), "", ">Photoshop LE", ">Inno Setup", ">Wings 3D", ">MSVC", ">SDL", "",
 gettext ("<Fonts used:"), "", ">Copperplate gothic bold", ">Verdana", "",

 "", "", "*12,14", "", "",

 gettext ("Thanks for playing!")
};

const char *ending2[] = {
 gettext (" Absolutely Amazing! "),
 "", "", "", "", "",

 "", "", "*15,4", "", "",

 gettext ("All Levels Mastered!!"),

 "", "", "*5,7", "", "",

 gettext ("You crushed every last green hexagon with"),
 gettext ("breathtaking efficiency!"),
 "",
 gettext ("You truly are a grand master of hexagon hopping!"),
};

const int endingLen = sizeof(ending)/sizeof(ending[0]);
const int endingLen2 = sizeof(ending2)/sizeof(ending2[0]);
const int scrollMax = 480 + (endingLen+1) * 25;

struct Ending : public Menu
{
 struct Particle{
  double x,y,xs,ys,xa,ya;
  double time;
  int type;

  void Update(double td)
  {
   if (type==EMPTY) return;

   time -= td;
   x += xs*td;
   y += ys*td;
   xs += xa*td;
   ys += ya*td;
   if (type==TILE_LASER_HEAD && time<0.3)
    type=TILE_FIRE_PARTICLE_1;
   if (type==TILE_FIRE_PARTICLE_1 && time<0.1)
    type=TILE_FIRE_PARTICLE_2;





   if (y>480 && type==TILE_GREEN_FRAGMENT)
    xa=0, ys=-ys/2, y=480, type=TILE_GREEN_FRAGMENT_1, time+=rand()%100*0.01;
   if (y>480 && type==TILE_GREEN_FRAGMENT_1)
    xa=0, ys=-ys/2, y=480, type=TILE_GREEN_FRAGMENT_2, time+=rand()%100*0.01;
   if (y>480 && type==TILE_GREEN_FRAGMENT_2)
    type = EMPTY;

   if (time<=0)
   {
    if (type < 10)
    {
     if (0) ; else for (int i=0; i<40; i++)
      new Particle(TILE_LASER_HEAD, x, y);
     if (0) ; else for (int i=0; i<40; i++)
      new Particle(TILE_GREEN_FRAGMENT + rand() % 3, x+32-rand()%63, y+20-rand()%40);
    }
    if (type==COLLAPSE_DOOR)
    {
     type = COLLAPSABLE;
     time += 1;
    }
    else
    {
     type = EMPTY;
    }
   }

   if (type==EMPTY) return;

   if (type<0.05 && type<15)
    RenderTile(false, tileSolid[type] ? TILE_WHITE_WALL : TILE_WHITE_TILE, int(x)+scrollX, int(y)+scrollY);
   else
    RenderTile(false, type, int(x)+scrollX, int(y)+scrollY);
  }

  Particle() : type(EMPTY) {}
  Particle(int t, int _x) : x(_x), type(t)
  {
   xa=ys=xs=0; ya=400;

   {
    xs = rand()%100-50;
    ys=-400-rand()%200;


    y = 480 +20;
    time = ys/-ya;
   }
  }
  Particle(int t, double _x, double _y) : type(t)
  {
   x=_x; y=_y;
   xa=0; ya=-100;
   double r = (rand() % 2000) * (3.1415926535897931) / 1000;
   double d = rand() % 50 + 250;

   xs = sin(r)*d;
   ys = cos(r)*d;
   time = 1 + (rand() & 255) /255.0;
   if (t==TILE_WATER_PARTICLE || t==TILE_GREEN_FRAGMENT || t==TILE_GREEN_FRAGMENT_1)
    time = 2;
   xa=-xs/time; ya=-ys/time;
   if (t==TILE_WATER_PARTICLE || t==TILE_GREEN_FRAGMENT || t==TILE_GREEN_FRAGMENT_1)
    ya += 500, ya/=2, xa/=2, xs/=2, ys/=2;
  }
  ~Particle() { type = EMPTY; }
  void* operator new(size_t sz);
 };

 Particle p[1000];

 double scroll;
 double t;
 bool goodEnding;
 static Ending* ending;

 Ending(bool _goodEnd) : goodEnding(_goodEnd)
 {
  memset(p, 0, sizeof(p));
  ending = this;
  renderBG = false;
  scroll = 0;
  t=0;
 }

 void Render()
 {
  SDL_Rect a = {0,0,640,480};
  SDL_FillRect(screen, &a, SDL_MapRGB(screen->format, 10,25,25));

  if (0) ; else for (unsigned int i=0; i<sizeof(p)/sizeof(p[0]); i++)
   p[i].Update(t);

  int x = a.x + a.w/2;
  int xl = 640/5;
  int xr = 640*4/5;
  int y = 480 - int(scroll);
  if (0) ; else for (int i=0; i<endingLen; i++)
  {
   if (y>-25*2 && y<480 +25)
   {
    const char * xx = (i<endingLen2 && goodEnding) ? ending2[i] : ::ending[i];
    if (xx[0]=='<')
     Print(xl, y+25, xx+1);
    else if (xx[0]=='>')
     PrintR(xr, y, xx+1);
    else if (xx[0]=='*')
    {
     RenderTile(false, atoi(xx+1), (xl+x)/2+scrollX, y+25/2+scrollY);
     RenderTile(false, atoi(strchr(xx, ',')+1), (xr+x)/2+scrollX, y+25/2+scrollY);
    }
    else
     PrintC(false, x, y, xx);
   }
   y+=25;
  }
  if (scroll > scrollMax + 25*10)
   PrintC(true, x, 480/2-25/2, gettext ("The End"));
 }

 void Cancel();

 bool KeyPressed(int key, int mod)
 {
  if (key=='r' && (mod & (KMOD_LCTRL|KMOD_RCTRL)))
  {
   time = 0;
   memset(p, 0, sizeof(p));
  }
  else
   return Menu::KeyPressed(key, mod);
  return true;
 }

 void Update(double td)
 {
  noMouse = 1;

  double old = time;

  t = td;
  if (keyState[SDLK_LSHIFT])
   t = td*5;
  if (keyState[SDLK_0])
   t = ((-td*5)>(-time) ? (-td*5) : (-time));

  Menu::Update(t);
  scroll = time * 50;




  if (old>4 && time > 4)
  {
   if (scroll < scrollMax + 25*17)
   {
    if (0) ; else for (int i=int( old/2.5); i<int(time/2.5); i++)
    {
     int xs = (rand()%640 * 6 + 1) / 8;
     if (0) ; else for (int j=rand()%3+1; j; j--)
      new Particle(rand()&1 ? COLLAPSABLE : COLLAPSE_DOOR, xs+j*64);
    }
   }
   if (scroll > scrollMax + 25*27)
    Cancel();
  }

 }
};

Ending* Ending::ending = 0;
void* Ending::Particle::operator new(size_t )
{
 static int start = 0;
 const int max = sizeof(ending->p)/sizeof(ending->p[0]);
 if (0) ; else for (int i=0; i<max; i++)
 {
  start++;
  if (start==max) start=0;
  if (ending->p[start].type==EMPTY)
   return &ending->p[start];
 }
 return &ending->p[rand() % max];
}

struct TitleMenu : public OptMenuTitle
{
 TitleMenu() : OptMenuTitle("")
 {


  SaveState p;
  freeSlot = -1;
  if (0) ; else for (int i=0; i<4; i++)
  {
   char tmp[80];
   GetSlotName(i, tmp);
   FILE* f = file_open(tmp, "rb");
   if (f)
   {
    p.LoadSave(f, false);
    fclose(f);

    if (p.general.completionPercentage==100 && p.general.masteredPercentage==100)
     sprintf(optionSlotName[i], gettext ("Continue game %d (All Clear!)"), i+1);
    else if (p.general.completionPercentage==100)
     sprintf(optionSlotName[i], gettext ("Continue game %d (%d%% + %d%%)"), i+1, p.general.completionPercentage, p.general.masteredPercentage);
    else
     sprintf(optionSlotName[i], gettext ("Continue game %d (%d%% complete)"), i+1, p.general.completionPercentage);

    opt[num_opt++] = OPT_GAMESLOT_0 + i;
   }
   else
   {



    if (freeSlot==-1)
     freeSlot = i;
   }
  }


  if (num_opt < 4)
   opt[num_opt++] = OPT_GAMESLOT_NEW;

  opt[num_opt++] = OPT_OPTIONS;




  opt[num_opt++] = OPT_QUIT;

  Init();




  if (num_opt==3)
   r.y+=25 +25/2, r2.y+=25 +25/2;

 }
 bool KeyPressed(int key, int mod);
};

struct QuitConfirmMenu : public OptMenuTitle
{
 QuitConfirmMenu() : OptMenuTitle(gettext ("Quit: Are you sure?"))
 {
  opt[num_opt++] = OPT_QUIT_CONFIRM;
  opt[select=num_opt++] = OPT_QUIT_CANCEL;
  Init();

  r.y += 25*1;
  r2.y += 25*2;
 }

};

struct DeleteConfirmMenu : public OptMenuTitle
{
 char tmp[800];
 int num;
 DeleteConfirmMenu(int _num) : OptMenuTitle(&tmp[0]), num(_num)
 {


  sprintf(tmp, gettext ("Really delete game %d?"), num+1);
  opt[num_opt++] = OPT_DELETE_CONFIRM;
  opt[select=num_opt++] = OPT_DELETE_CANCEL;
  Init();

  r.y += 25*1;
  r2.y += 25*2;
 }
 void Select()
 {
  if (select<0 || select>=num_opt)
   return;
  if (opt[select] == OPT_DELETE_CONFIRM)
  {
   GetSlotName(num, tmp);
   remove(tmp);
  }
  Pop();
  Pop();
  new TitleMenu();
 }
};

bool TitleMenu::KeyPressed(int key, int mod)
{
 if (key==SDLK_DELETE || key==SDLK_BACKSPACE || key==SDLK_F2)
 {
  if (select<0 || select>=num_opt || opt[select]<OPT_GAMESLOT_0 || opt[select]>OPT_GAMESLOT_LAST)
   return true;
  int i = opt[select] - OPT_GAMESLOT_0;

  new DeleteConfirmMenu(i);

  return true;
 }
 return OptMenu::KeyPressed(key, mod);
}

struct PauseMenu : public OptMenu
{
 PauseMenu(bool isMap, bool allowGotoMap, int allowEnd, int allowEnd2) : OptMenu(gettext ("Paused"))
 {
  opt[num_opt++] = OPT_RESUME;
  if (!isMap)
   opt[num_opt++] = OPT_RESTART;
  opt[num_opt++] = OPT_OPTIONS;
  opt[num_opt++] = OPT_HELP;
  if (allowEnd || allowEnd2)
   opt[num_opt++] = allowEnd2 ? OPT_END2 : OPT_END;
  opt[num_opt++] = (isMap || !allowGotoMap) ? OPT_QUIT_MENU_CONFIRM : OPT_GOTO_MAP;
  Init();
 }
 virtual bool KeyPressed(int key, int mod)
 {
  if (key=='p' || key==SDLK_PAUSE)
  {
   Cancel();
   return true;
  }
  return Menu::KeyPressed(key, mod);
 }

};

struct OptionMenu : public OptMenuTitle
{
 bool title;
 OptionMenu(bool _title) : OptMenuTitle(gettext ("Options")), title(_title)
 {
  opt[num_opt++] = OPT_FULLSCREEN;

  opt[num_opt++] = OPT_BACK;

  if (title)
  {
   OptMenuTitle::Init(), renderBG=false;
   r.y += 25;
   r2.y += 25*2;
  }
  else
   OptMenu::Init(), renderBG=true;
 }
 void Render()
 {
  if (title)
   OptMenuTitle::Render();
  else
   OptMenu::Render();
 }
};

void RenderFade(double time, int dir, int seed);

struct Fader : public Menu
{
 int dir;
 double speed;
 int result;
 Fader(int _dir, int _result, double _speed=1) : dir(_dir), speed(_speed), result(_result)
 {
  renderBG = under ? under->renderBG : true;
 }
 void Render()
 {
  if (under)
   under->Render();

  RenderFade(time, dir, (long)this);
 }
 void Update(double timedelta)
 {
  Menu::Update(timedelta * speed);
  if (result==-2)
  {
   if (time > 0.7)
    quitting = 1;
  }
  else if (time >= 0.5)
  {
   Pop();
   if (result==-1)
   {
    new TitleMenu();
    new Fader(1, -3);
   }
   if (result==-4)
   {
    Pop();
    HackKeyPress(SDLK_ESCAPE, (KMOD_LCTRL|KMOD_RCTRL) | (KMOD_LSHIFT|KMOD_RSHIFT));
   }
   if (result==-6)
   {
    Pop();
    new Fader(1, 0, speed);
   }
   if (result==-5 || result==-7)
   {
    new Ending(result==-7);
    new Fader(1, 0, speed);
   }
  }
 }
};

void Ending::Cancel()
{
 new Fader(-1, -6, 0.3);

}

void ToggleFullscreen();

void OptMenu::Select()
{
 if (select<0 || select>=num_opt)
  return;
 switch(opt[select])
 {
  case OPT_RESUME:
   Cancel();
   break;

  case OPT_RESTART:
   Cancel();
   HackKeyPress('r', (KMOD_LCTRL|KMOD_RCTRL));
   break;

  case OPT_GOTO_MAP:
  case OPT_GOTO_MAP_CONTINUE:
   Pop();
   HackKeyPress(SDLK_ESCAPE, (KMOD_LCTRL|KMOD_RCTRL));
   break;

  case OPT_QUIT:
   new QuitConfirmMenu();
   break;

  case OPT_FULLSCREEN:
   ToggleFullscreen();
   break;

  case OPT_QUIT_CONFIRM:
   new Fader(-1, -2);
   break;

  case OPT_QUIT_MENU_CONFIRM:
   Pop();
   new Fader(-1, -1);
   break;

  case OPT_OPTIONS:
   new OptionMenu(!activeMenu->renderBG);
   break;

  case OPT_HELP:
   new HintReview();
   break;

  case OPT_QUIT_CANCEL:
  case OPT_BACK:
   Pop();
   break;

  case OPT_END:
   new Fader(-1, -5, 0.3);
   break;

  case OPT_END2:
   new Fader(-1, -7, 0.3);
   break;

  case OPT_UNDO:
   Pop();
   HackKeyPress('z', 0);
   break;

  default:
   if (opt[select]>=OPT_GAMESLOT_0 && opt[select]<=OPT_GAMESLOT_LAST
    || opt[select]==OPT_GAMESLOT_NEW && freeSlot>=0)
   {
    if (opt[select]==OPT_GAMESLOT_NEW)
     GetSlotName(freeSlot, currentSlot);
    else
     GetSlotName(opt[select]-OPT_GAMESLOT_0, currentSlot);
    new Fader(-1, -4);
   }
   break;
 }
}
# 450 "hex_puzzzle.cpp" 2
# 1 "level_list.h" 1
# 20 "level_list.h"
struct LevelInfo{
 int hintID;
 const char *file, *name;
} levelNames[] = {



{0, "map_maybe\\map.lev", gettext ("  Map"),},
{0, "0_green\\asymmetrix.lev", gettext ("  Orbital"),},
{0, "0_green\\hive.lev", gettext ("  Hive"),},
{0, "0_green\\there and back.lev", gettext ("  There  and Back"),},
{0, "0_green\\triangular.lev", gettext ("  Triangular"),},
{0, "1_trampoline\\01.lev", gettext ("  Mini  Island"),},
{0, "1_trampoline\\01_b.lev", gettext ("  Island  Variation"),},
{0, "1_trampoline\\archipeligo.lev", gettext ("  Archipelago"),},
{0, "1_trampoline\\arrow.lev", gettext ("  Weathervane"),},
{0, "1_trampoline\\Bridges.lev", gettext ("  Bridges"),},
{0, "1_trampoline\\explorer.lev", gettext ("  Explorer"),},
{0, "1_trampoline\\test_trampoline.lev", gettext ("  Trampolines"),},
{0, "2_greendoor\\Loopy.lev", gettext ("  Not a Knot"),},
{0, "2_greendoor\\more mountain.lev", gettext ("  Another  Mountain"),},
{0, "2_greendoor\\Mountain.lev", gettext ("  A  Mountain"),},
{0, "2_greendoor\\test_green_gate.lev", gettext ("  Green  Walls"),},
{0, "2_greendoor\\winding order.lev", gettext ("  Winding  Order"),},
{0, "2005_11_15\\boating.lev", gettext ("  Rental  Boat"),},
{0, "2005_11_15\\ferry.lev", gettext ("  Ferrying"),},
{0, "2005_11_15\\HUB.LEV", gettext ("  Transport  Hub"),},
{0, "2005_11_15\\learn lift.lev", gettext ("  Lifts"),},
{0, "2005_11_15\\leftovers.lev", gettext ("  Leftovers"),},
{0, "2005_11_15\\lumpy.lev", gettext ("  Trampoline  Retrieval"),},
{0, "2005_11_15\\rolling hexagons.lev", gettext ("  Rolling  Hexagons"),},
{0, "2005_11_15\\telephone.lev", gettext ("  Telephone"),},
{0, "2005_11_16\\breakthrough.lev", gettext ("  Breakthrough"),},
{0, "2005_11_19\\aa.lev", gettext ("  Laser  Safety"),},
{0, "2005_11_19\\branches.lev", gettext ("  Branching  Pathway"),},
{0, "2005_11_19\\one way up.lev", gettext ("  Only One  Way Up"),},
{0, "2005_11_19\\outposts.lev", gettext ("  Outposts"),},
{0, "2005_11_19\\turntables.lev", gettext ("  Roundabouts"),},
{0, "2005_11_19\\two fish.lev", gettext ("  Two  Fish"),},
{0, "3_2hitfloor\\all wound up.lev", gettext ("All  Wound  Up"),},
{0, "3_2hitfloor\\collapse2.lev", gettext ("  Toughened  Tiles"),},
{0, "3_2hitfloor\\Island.lev", gettext ("  Island"),},
{0, "3_2hitfloor\\more stripes.lev", gettext ("  More  Stripes"),},
{0, "3_2hitfloor\\Stripey.lev", gettext ("  Stripes"),},
{0, "3_2hitfloor\\test_2hit_floor.lev", gettext ("  One Two  One Two"),},
{0, "3_2hitfloor\\Turtle.lev", gettext ("  Turtle"),},
{0, "3_2hitfloor\\Wand.lev", gettext ("  Wand"),},
{0, "4_gun\\deathtrap.lev", gettext ("  Deathtrap"),},
{0, "4_gun\\eagerness.lev", gettext ("  Eagerness"),},
{0, "4_gun\\gun platform.lev", gettext ("  Gun  Platform"),},
{0, "4_gun\\Nucleus.lev", gettext ("  Nucleus"),},
{0, "4_gun\\Sniper.lev", gettext ("  Sniper"),},
{0, "4_gun\\snowflake 2.lev", gettext ("  Deadly  Snowflake"),},
{0, "4_gun\\snowflake.lev", gettext ("  Snowflake"),},
{0, "4_gun\\Test_gun.lev", gettext ("  Laser  Tiles"),},
{0, "4_gun\\trigger happy.lev", gettext ("  Trigger  Happy"),},
{0, "5_spinner\\lure.lev", gettext ("  Lure"),},
{0, "5_spinner\\Maxe.lev", gettext ("  Maze"),},
{0, "5_spinner\\Motion.lev", gettext ("  Motion  Sickness"),},
{0, "5_spinner\\preperation mk 3.lev", gettext ("  All About  Preparation"),},
{0, "5_spinner\\revolver cannon.lev", gettext ("  Revolver  Cannon"),},
{0, "5_spinner\\small cog.lev", gettext ("  Small  Cog"),},
{0, "5_spinner\\Sprocket.lev", gettext ("  Sprocket"),},
{0, "5_spinner\\switch.lev", gettext ("  Switch"),},
{0, "5_spinner\\test_spinner.lev", gettext ("  Spinner  Tiles"),},
{0, "5_spinner\\three more ways.lev", gettext ("  Three  More Ways"),},
{0, "5_spinner\\three ways mk 2.lev", gettext ("  Three  Ways To Go"),},
{0, "6_ice\\oo.lev", gettext ("Please  Skate  Safely"),},
{0, "6_ice\\refraction.lev", gettext ("  Refraction"),},
{0, "6_ice\\route finder.lev", gettext ("  Route  Finder"),},
{0, "6_ice\\slippy.lev", gettext ("A  Slippery  Situation"),},
{0, "7_item\\crooked.lev", gettext ("  Crooked"),},
{0, "7_item\\green honey.lev", gettext ("  Green  Honey"),},
{0, "7_item\\kx.lev", gettext ("  Carefully  Does It"),},
{0, "7_item\\radioactive ice.lev", gettext ("  Radioactive  Ice"),},
{0, "7_item\\slider.lev", gettext ("  Pro  Skater"),},
{0, "7_item\\spinners mk2.lev", gettext ("  Spinners  II"),},
{0, "7_item\\spinners.lev", gettext ("  Spinners"),},



{0, "7_item\\test_ice.lev", gettext ("  Deslippify"),},
{0, "7_item\\tt.lev", gettext ("  Tri Mesh"),},
{0, "7_item\\Wheel.lev", gettext ("  Wheel"),},
{0, "8_item2\\finishing strike.lev", gettext ("  Finishing  Strike"),},
{0, "8_item2\\p2.lev", gettext ("  Big  Jumps"),},
{0, "8_item2\\wave cannon.lev", gettext ("  Wave  Cannon"),},
{0, "9_boat\\clearance.lev", gettext ("  Clearance"),},
{0, "9_boat\\floating.lev", gettext ("  Floating"),},
{0, "9_boat\\forced fire.lev", gettext ("  Forced  Fire"),},
{0, "9_boat\\no swimming allowed.lev", gettext ("No  Swimming  Allowed"),},
{0, "a.lev", gettext ("A Little  Light  Lifting"),},
{0, "A_Lift\\house.lev", gettext ("  House"),},
{0, "A_Lift\\hunting.lev", gettext ("  Hunting"),},
{0, "A_Lift\\Lifting.lev", gettext ("  More  Lifting"),},
{0, "A_Lift\\opportunist_mini.lev", gettext ("  Opportunist"),},
{0, "A_Lift\\test_lift.lev", gettext ("  Demolition"),},
{0, "A_Lift\\upper.lev", gettext ("  Upper"),},
{0, "b.lev", gettext ("Beware  Feedback  Loops"),},
{0, "B_Builder\\airlock ending.lev", gettext ("  Somewhat  Constructive"),},
{0, "B_Builder\\overbuild.lev", gettext ("  Overbuild"),},
{0, "B_Builder\\reversing space.lev", gettext ("  Reversing  Space"),},
{0, "B_Builder\\test_builder.lev", gettext ("Burn  Your  Bridges"),},
{0, "c.lev", gettext ("A  Strange  Place"),},
{0, "commute.lev", gettext ("  Commute"),},
{0, "d.lev", gettext ("  Bouncing  Required"),},
{0, "de-icing.lev", gettext ("  Fetch  Quest"),},
{0, "e.lev", gettext ("  Laser  Surgery"),},
{0, "ice intro.lev", gettext ("  Icy  Tiles"),},
{0, "icy road.lev", gettext ("  Icy  Road"),},
{0, "invertor.lev", gettext ("  Inversion"),},

{0, "_20", gettext ("Complete __ levels to unlock")},
{0, "_35", gettext ("Complete __ levels to unlock")},
{0, "_55", gettext ("Complete __ levels to unlock")},
{0, "_75", gettext ("Complete __ levels to unlock")},
{0, "_90", gettext ("Complete __ levels to unlock")},

};
# 451 "hex_puzzzle.cpp" 2

void SaveState::GetStuff()
{
 general.hintFlags = HintMessage::flags;
}
void SaveState::ApplyStuff()
{
 HintMessage::flags = general.hintFlags;
}




typedef int32_t Tile;
typedef int Dir;
struct Pos{
 int32_t x,y;
 Pos() : x(0), y(0) {}
 Pos(int a, int b) : x(a), y(b) {}
 bool operator == (Pos const & p) const
 {
  return x==p.x && y==p.y;
 }
 Pos operator + (Dir const d) const
 {
  return Pos(
   x + ((d==1 || d==2) ? 1 : (d==4 || d==5) ? -1 : 0),
   y + ((d==0 || d==1) ? -1 : (d==3 || d==4) ? 1 : 0)
  );
 }
 int getScreenX() const {
  return x*(64 -18);
 }
 int getScreenY() const {
  return x*18 + y*(18*2);
 }
 static Pos GetFromWorld(double x, double y)
 {
  x += 64/2;
  y += 18;
  int tx, ty;
  tx = (int)floor(x/(64 -18));
  y -= tx*18;
  ty = (int)floor(y/(18*2));

  y -= ty * (18*2);
  x -= tx * (64 -18);

  if (x < 18 && y < 18)
   if (x*18 + y * 18 < 18*18)
    tx--;
  if (x < 18 && y > 18)
   if (x*18 + ((18*2)-y) * 18 < 18*18)
    tx--, ty++;

  return Pos(tx, ty);
 }
};
Pos mousep(0,0), keyboardp(4,20);

class RenderObject;

struct RenderStage
{
 virtual ~RenderStage() {}
 virtual void Render(RenderObject* r, double time, bool reflect) = 0;
 virtual int GetDepth(double ) { return 1; }
};

class RenderObject
{
 RenderStage** stage;
 double* time;
 int numStages;
 int maxStages;
 int currentStage;
public:
 double seed;
 double currentTime;
private:

 void Reserve()
 {
  if (maxStages <= numStages)
  {
   maxStages = maxStages ? maxStages*2 : 4;
   stage = (RenderStage**) realloc(stage, sizeof(stage[0])*maxStages);
   time = (double*) realloc(time, sizeof(time[0])*maxStages);
  }
 }
public:
 RenderObject() : stage(0), time(0), numStages(0), maxStages(0), currentStage(0)
 {


  seed = rand() / (double)2147483647;
 }
 ~RenderObject()
 {
  free(stage); free(time);
 }
 bool Active(double t)
 {
  if (numStages==0) return false;
  if (t < time[0]) return false;
  return true;
 }
 void UpdateCurrent(double t)
 {
  if (currentStage >= numStages) currentStage = numStages-1;
  if (currentStage < 0) currentStage = 0;

  while (currentStage>0 && time[currentStage]>t)
   currentStage--;
  while (currentStage<numStages-1 && time[currentStage+1]<=t)
   currentStage++;

  currentTime = t;
 }
 RenderStage* GetStage(double t)
 {
  if (t==-1 && numStages>0)
   return stage[numStages-1];

  if (!Active(t)) return 0;
  UpdateCurrent(t);
  return stage[currentStage];
 }
 double GetLastTime()
 {
  return numStages>0 ? time[numStages-1] : -1;
 }
 void Render(double t, bool reflect)
 {
  if (!Active(t))
   return;
  UpdateCurrent(t);
  stage[currentStage]->Render(this, t - time[currentStage], reflect);
 }
 int GetDepth(double t)
 {
  if (!Active(t))
   return -1;
  UpdateCurrent(t);
  return stage[currentStage]->GetDepth(t - time[currentStage]);
 }
 void Reset(double t)
 {
  if (t<0)
   numStages = currentStage = 0;
  else
  {
   while (numStages > 0 && time[numStages-1] >= t)
    numStages--;
  }
 }
 void Wipe()
 {
  if (currentStage > 0 && numStages > 0)
  {
   memmove(&time[0], &time[currentStage], sizeof(time[0]) * (numStages-currentStage));
   memmove(&stage[0], &stage[currentStage], sizeof(stage[0]) * (numStages-currentStage));
   numStages -= currentStage;
   currentStage = 0;
  }
 }
 void Add(RenderStage* s, double t)
 {
  int i=0;

  if (currentStage<numStages && time[currentStage]<=t)
   i = currentStage;

  while (i<numStages && time[i]<t)
   i++;

  if (i<numStages && time[i]==t)
   stage[i]=s;
  else
  {
   Reserve();

   if (i<numStages)
   {
    memmove(&time[i+1], &time[i], (numStages-i) * sizeof(time[0]));
    memmove(&stage[i+1], &stage[i], (numStages-i) * sizeof(stage[0]));
   }

   numStages++;
   time[i] = t;
   stage[i] = s;
  }
 }
};

class WorldRenderer
{


 RenderObject tile[30][30][2];
 RenderObject fx[10];
 int fxPos;

public:
 RenderObject player;
 RenderObject dummy;

 WorldRenderer()
 {
  Reset();
 }

 void Reset(double t = -1)
 {
  fxPos = 0;
  player.Reset(t);
  dummy.Reset(-1);

  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
    if (0) ; else for (int q=0; q<2; q++)
     tile[i][j][q].Reset(t);

  if (0) ; else for (int j=0; j<10; j++)
   fx[j].Reset(t);
 }

 void Wipe()
 {
  player.Wipe();
  dummy.Reset(-1);

  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
    if (0) ; else for (int q=0; q<2; q++)
     tile[i][j][q].Wipe();

  if (0) ; else for (int j=0; j<10; j++)
   fx[j].Wipe();
 }

 bool Visible(Pos p)
 {
  int x0 = (scrollX+(64 -18)) / (64 -18);
  int x1 = (scrollX+640 +64 +18) / (64 -18);
  if (p.x<0 || p.y<0 || p.x>=30 || p.y>=30) return false;
  if (p.x<x0) return false;
  if (p.x>=x1-1) return false;
  if (0) ; else for (int j0=0; j0<30*3; j0++)
  {
   if (j0 * 18 < scrollY-18) continue;
   if (j0 * 18 > scrollY+480 +18) break;
   int i = j0&1;
   int j = j0>>1;
   j -= (x0-i)/2;
   i += (x0-i)/2*2;
   if (j>=30) i+=(j+1-30)*2, j=30 -1;
   if (0) ; else for (; i<x1 && j>=0; i+=2, j--)
   {
    if (Pos(i,j)==p)
     return true;
   }
  }
  return false;
 }

 void Render(double t, bool reflect)
 {
  dummy.Reset(-1);

  int playerDepth = player.GetDepth(t);
  if (reflect) playerDepth-=4;
  if (playerDepth<0)
   player.Render(t, reflect);

  int x0 = (scrollX+(64 -18)) / (64 -18);
  int x1 = (scrollX+640 +64 +18) / (64 -18);
  x0 = ((x0)>(0) ? (x0) : (0));
  x1 = ((x1)<(30) ? (x1) : (30));
  if (0) ; else for (int j0=0; j0<30*3; j0++)
  {
   if (j0 * 18 < scrollY-18) continue;
   if (j0 * 18 > scrollY+480 +18) break;
   int i = j0&1;
   int j = j0>>1;
   j -= (x0-i)/2;
   i += (x0-i)/2*2;
   if (j>=30) i+=(j+1-30)*2, j=30 -1;
   if (0) ; else for (; i<x1 && j>=0; i+=2, j--)
   {
    if (0) ; else for (int q=reflect?1:0; q!=2 && q!=-1; q += (reflect ? -1 : 1))
     if (tile[i][j][q].Active(t))
     {
      tile[i][j][q].Render(t, reflect);
     }
   }

   if (playerDepth==j0 || j0==30*3 && playerDepth>j0)
    player.Render(t, reflect);
  }

  if (0) ; else for (int j=0; j<10; j++)
   if(fx[j].Active(t))
   {
    fx[j].Render(t, reflect);
   }

 }
 RenderObject & operator () ()
 {
  fxPos++;
  if (fxPos==10) fxPos = 0;
  return fx[fxPos];
 }
 RenderObject & operator () (Pos const & p, bool item=false)
 {
  if (p.x<0 || p.y<0 || p.x>=30 || p.y>=30)
   return dummy;
  return tile[p.x][p.y][item ? 1 : 0];
 }
};

void RenderTile(bool reflect, int t, int x, int y, int cliplift)
{
 SDL_Rect src = tile[reflect][t];
 SDL_Rect dst = {x-scrollX-64/2, y-scrollY-64 +18, 0, 0};
 dst.x += tileOffset[reflect][t][0];
 dst.y += tileOffset[reflect][t][1];
 if (reflect)
  dst.y += 24;
 if (cliplift==-1 || reflect)
 {


  SDL_UpperBlit(reflect ? tileGraphicsR : tileGraphics, &src, screen, &dst);
 }
 else
 {
  src.h -= cliplift;
  if (src.h > 18)
  {
   src.h -= 18/2;
   SDL_UpperBlit(tileGraphics, &src, screen, &dst);
   src.y += src.h;
   dst.y += src.h;
   src.h = 18/2;
  }
  if (src.h > 0)
  {
   src.w -= 18*2, src.x += 18;
   dst.x += 18;
   SDL_UpperBlit(tileGraphics, &src, screen, &dst);
  }
 }
}
void RenderGirl(bool reflect, int r, int frame, int x, int y, int h)
{
 int sx = r * 64;
 int sy = frame * 80*2;
 if (reflect)
  y += 24 +20+h, sy += 80;
 else
  y -= h;
 SDL_Rect src = {sx, sy, 64, 80};
 SDL_Rect dst = {x-scrollX-32, y-scrollY-65, 0, 0};
 SDL_UpperBlit(girlGraphics, &src, screen, &dst);
}

struct ItemRender : public RenderStage
{
 int item;
 Pos p;
 int water;

 ItemRender(int i2, int _water, Pos const & _p) : item(i2), p(_p), water(_water)
 {}

 double Translate(double seed, double time)
 {
  double bob = time*2 + seed*((3.1415926535897931)*2);
  return sin(bob)*4;
 }

 void Render(RenderObject* r, double time, bool reflect)
 {
  if (item==0)
   return;

  int y = -5 + (int)Translate(r->seed, r->currentTime + time);
  if (reflect)
   y=-y;
  if (!reflect && !water)
   RenderTile( false, TILE_SPHERE, p.getScreenX(), p.getScreenY());
  RenderTile(
   reflect,
   item==1 ? TILE_ITEM1 : TILE_ITEM2,
   p.getScreenX(), p.getScreenY()+y
  );
 }
};

void RenderFade(double time, int dir, int seed)
{
 int ys=0;
 srand(seed);
 if (0) ; else for(int x=rand()%22-11; x<640 +22; x+=32, ys ^= 1)
 {
  if (0) ; else for (int y=ys*20; y<480 +30; y+=40)
  {
   double a = (rand()&0xff)*dir;
   double b = (time * 0x400 + (y - 480) * 0x140/480)*dir;
   if (a >= b)
   {
    RenderTile(false, TILE_BLACK_TILE, x+scrollX, y+scrollY);
   }
  }
 }
}

struct FadeRender : public RenderStage
{
 int seed;
 int dir;
 FadeRender(int d=-1) : seed(rand()), dir(d)
 {
  isFadeRendering = d;
 }

 void Render(RenderObject* , double time, bool reflect)
 {
  if (reflect) return;
  if (time > 0.5)
  {
   if (dir==1) dir=0, isFadeRendering=0;
   return;
  }
  RenderFade(time, dir, seed);
 }
};

struct ScrollRender : public RenderStage
{
 int x,y;
 bool done;
 ScrollRender(int a,int b) : x(a), y(b), done(false) {}

 void Render(RenderObject* , double , bool )
 {
  if (done) return;
  scrollX = x, scrollY = y;
  isRenderMap = isMap;
  done = true;
 }
};

struct LevelSelectRender : public RenderStage
{
 Pos p;
 int item;
 int adj;




 LevelSelectRender(Pos const & _p, int i2, int adj) : p(_p), item(i2), adj(adj)
 {}

 void Render(RenderObject* , double , bool reflect)
 {
  if (item==0)
   return;


  if (item==1) return;


 if (!reflect && adj)
  if (0) ; else for (int i=0; i<6; i++)
   if (adj & (1 << i))
    RenderTile( false, TILE_LINK_0+i, p.getScreenX(), p.getScreenY());

 if (item < 0)
  return;

 if (!reflect)
 {
  RenderTile(
   reflect,
   TILE_SPHERE + item-1,
   p.getScreenX(), p.getScreenY()
  );





 }
 }
};

struct ItemCollectRender : public ItemRender
{
 ItemCollectRender(int i2, Pos const & p) : ItemRender(i2, 0, p)
 {}

 void Render(RenderObject* , double , bool )
 {
 }
};

int GetLiftHeight(double time, int t)
{
 if (t==LIFT_UP)
  time = 0.5 -time;
 time = time / 0.5;
 if (time > 1)
  time = 1;
 if (time < 0)
  time = 0;
 time = (3 - 2*time)*time*time;
 if (t==LIFT_UP)
  time = (3 - 2*time)*time*time;
 if (t==LIFT_UP)
  return (int)((26 +4) * time);
 else
  return (int)((26 -4) * time) + 4;
}

struct TileRender : public RenderStage
{
 int special;
 int t;
 Pos p;
 double specialDuration;

 TileRender(int i, Pos const & _p, int _special=0) : special(_special), t(i), p(_p), specialDuration(0.7)
 {}

 void Render(RenderObject* r, double time, bool reflect)
 {
  if (t==0 && special==0)
   return;

  if (special && (t==LIFT_UP || t==LIFT_DOWN) && time<0.5)
  {
   int y = GetLiftHeight(time, t);
   if (!reflect)
   {
    RenderTile(reflect, TILE_LIFT_BACK, p.getScreenX(), p.getScreenY());
    RenderTile(reflect, TILE_LIFT_SHAFT, p.getScreenX(), p.getScreenY()+y, y-8);
    RenderTile(reflect, TILE_LIFT_FRONT, p.getScreenX(), p.getScreenY());
   }
   else
   {
    RenderTile(reflect, TILE_LIFT_SHAFT, p.getScreenX(), p.getScreenY()-y, y);
    RenderTile(reflect, LIFT_DOWN, p.getScreenX(), p.getScreenY());
   }
  }
  else if (special && (t==EMPTY || t==TRAP) && !reflect && time < specialDuration)
  {
   if (t == TRAP)
    if (time < specialDuration-0.1)
     RenderTile(reflect, TILE_ICE_LASER_REFRACT, p.getScreenX(), p.getScreenY());
    else
     RenderTile(reflect, t, p.getScreenX(), p.getScreenY());
   int base = ((t==EMPTY) ? TILE_LASER_0 : TILE_LASER_REFRACT);
   if (t==EMPTY && time >= specialDuration-0.1)
    base = TILE_LASER_FADE_0;

   int foo=special;
   if (0) ; else for(int i=0; foo; foo>>=1, i++)
    if (foo & 1)
     RenderTile(reflect, base+i, p.getScreenX(), p.getScreenY());
  }
  else if (t==FLOATING_BALL)
  {
   int y = int(1.8 * sin(r->seed*(3.1415926535897931) + time*4));
   if (special==512)
   {
    if (time > 2) return;
    if (reflect) return;
    srand(int(r->seed * 0xfff));
    if (0) ; else for (int i=0; i<20 - int(time*10); i++)
    {
     int x = int((((rand() & 0xfff) - 0x800) / 10) * time);
     int y = int((((rand() & 0xfff) - 0x800) / 10) * time);
     RenderTile(true, 19 + ((i+int(time*5))&1)*10, p.getScreenX() + x, p.getScreenY() - 14 + y);
    }

    if (time < 0.05)
     RenderTile(true, 18, p.getScreenX(), p.getScreenY() - 14);
   }
   else if (special)
    RenderBoat(reflect, int(special)&255, p.getScreenX(), p.getScreenY(), y);
   else
    RenderTile(reflect, t, p.getScreenX(), p.getScreenY() + (reflect ? -y : y));
  }
  else if (t != EMPTY)
   RenderTile(reflect, t, p.getScreenX(), p.getScreenY());
 }
 static void RenderBoat(bool reflect, int d, int x, int y, int yo)
 {
  if (reflect)
   RenderGirl(reflect, d, 0, x, y, -yo);
  RenderTile(reflect, FLOATING_BALL, x, y+yo);
  if (!reflect)
  {
   RenderGirl(reflect, d, 0, x, y, -yo);
   RenderTile(true, 17, x, y+yo-24);
  }
 }
};

struct TileRotateRender : public TileRender
{
 Dir d;

 int mode;
 TileRotateRender(int i, Pos const & p, Dir _d, int m) : TileRender(i, p), d(_d), mode(m)
 {}
 void Render(RenderObject* r, double time, bool reflect)
 {
  if (t==0)
   return;
  double f = time / 0.25;

  if (mode & 1) f += 0.5;
  if (f<1 && f>0)
  {
   if (mode & 2)
    ;
   else
    f = (3-2*f)*f*f;
  }

  if (mode & 1) f=1-f; else f=f;
  if (f<0) f=0;

  if (f >= 1)
   TileRender::Render(r, time, reflect);
  else
  {
   Pos dd = (Pos(0,0)+d);
   int x = p.getScreenX() + int(dd.getScreenX()*(f));
   int y = p.getScreenY() + int(dd.getScreenY()*(f));

   if (mode & 2)
    RenderBoat(reflect, (mode&1) ? (d+6/2)%6 : d, x, y, 2);
   else
    RenderTile(reflect, t, x, y);
  }
 }
};

struct LaserRender : public RenderStage
{
 Pos p;
 Dir d;
 int range;

 LaserRender(Pos _p, int dir, int r) : p(_p), d(dir), range(r)
 {}

 void Render(RenderObject* , double )
 {
 }
};

struct ExplosionRender : public RenderStage
{
 Pos p;
 int seed;
 int power;
 int type;

 ExplosionRender(Pos _p, int _pow=0, int t=0) : p(_p), power(_pow), type(t)
 {
  seed = rand();
 }

 virtual int GetDepth(double )
 {
  return p.x + p.y*2;
 }

 void Render(RenderObject* , double time, bool reflect)
 {
  if (type==1 && time > 2.5)
   type = -1, new WinLoseScreen(false);


  if (time > 3) return;
  srand(seed);
  int q = 50 - int(time * 35);
  if (power) q*=2;
  if (type) q = 50;
  if (0) ; else for (int i=0; i<q; i++)
  {
   int x = p.getScreenX();
   int y = p.getScreenY() + (rand() & 31)-16;
   int xs = ((rand() & 63) - 32);
   int ys = (-10 - (rand() & 127)) * (1+power);
   if (type) ys*=2, xs/=2;
   x += int(xs * (1+time*(2+power)));
   int yo = int(time*time*128 + ys*time);

   if (type)
   {

    if (yo > 0)
    {
     if (!reflect && ys<-60)
     {
      const double T = 0.06;
      double ct = -ys / 128.0;
      if (time < ct+T*4)
      {
       x = p.getScreenX() + int(xs * (1+ct*(2+power)));
       RenderTile(
        reflect,
        time > ct+3*T ? TILE_SPLASH_3 : time > ct+2*T ? TILE_SPLASH_2 : time > ct+T ? TILE_SPLASH_1 : TILE_WATER_PARTICLE+1,
        x, y);
      }
     }
    }
    else
     RenderTile(
      reflect,
      time - i*0.003 < 0.2 ? TILE_WATER_PARTICLE+1 : TILE_WATER_PARTICLE,
      x, y+(reflect?-1:1)*yo);
   }
   else
   {
    if (yo > 0)
     ;
    else
     RenderTile(
      reflect,
      i<q-20 || time<0.3 ? TILE_LASER_HEAD : i<q-10 || time<0.6 ? TILE_FIRE_PARTICLE_1 : TILE_FIRE_PARTICLE_2,
      x, y+(reflect?-1:1)*yo);
   }
  }
 }
};
struct DisintegrateRender : public RenderStage
{
 Pos p;
 int seed;
 int height;
 int type;

 DisintegrateRender(Pos _p, int _pow=0, int _t=0) : p(_p), height(_pow), type(_t)
 {
  seed = rand();
 }

 void Render(RenderObject* , double time, bool reflect)
 {
  if (type)
   RenderTile(reflect, height ? COLLAPSE_DOOR : COLLAPSABLE, p.getScreenX(), p.getScreenY());

  if (time > 50.0/70.0) return;
  if (reflect) return;
  srand(seed);
  int q = 50 - int(time * 70);
  if (height) q*=2;
  if (0) ; else for (int i=0; i<q; i++)
  {
   int x = (rand() % (64 -8))-64/2+4;
   int y = (rand() % ((18*2)-8))-18 +4;
   if (x<-((64 -18)-18)/2 && ((y)<0 ? -(y) : (y))<-((64 -18)-18)/2-x) continue;
   if (x>((64 -18)-18)/2 && ((y)<0 ? -(y) : (y))>x-((64 -18)-18)/2) continue;
   int yo=0;
   if (height) yo -= rand() % 22;
   x += p.getScreenX();
   y += p.getScreenY() + 4;
   int xs = 0;
   int ys = (- (rand() & 31));
   x += int(xs * (1+time*(2)));
   if (type) yo = -yo;
   yo += int(time*time*128 + ys*time);
   if (type) yo = -yo*2;

   int t = type ? TILE_BLUE_FRAGMENT : TILE_GREEN_FRAGMENT;
   if (i>q-20) t++;
   if (i>q-10) t++;
   if (yo > 5) yo = 5;
   RenderTile(false, t, x, y+(reflect?-yo:yo));
  }
 }
};
struct BuildRender : public RenderStage
{
 Pos p;
 Dir dir;
 int reverse;
 int height;
 int type;

 BuildRender(Pos _p, Dir _d, int _h, int _r=0, int _type=0) : p(_p), dir(_d), reverse(_r), height(_h), type(_type)
 {
 }

 void Render(RenderObject* , double time, bool reflect)
 {
  if (time >= 1)
   RenderTile(reflect, height ^ reverse ? (type ? COLLAPSE_DOOR2 : COLLAPSE_DOOR) : (type ? COLLAPSABLE2 : COLLAPSABLE), p.getScreenX(), p.getScreenY());
  else
  {
   if (height)
    RenderTile(reflect, type ? COLLAPSABLE2 : COLLAPSABLE, p.getScreenX(), p.getScreenY());

   double dist = time * 2 / 1;
   if (dir>-1)
   {
    Pos from = p + ((dir+6/2)%6);
    if (dist <= 1)

    {
     double offset = (dist*0.7) + 0.3;
     int x = from.getScreenX() + int((p.getScreenX()-from.getScreenX()) * offset);
     int y = from.getScreenY() + int((p.getScreenY()-from.getScreenY()) * offset - dist*(1-dist)*(22*4));
     RenderTile(reflect, TILE_GREEN_FRAGMENT, x, y);
    }
    dist -= 1;
   }
   else
   {
    if (reverse) dist = 1-dist;
   }
   if (dist > 0 && !height)
   {
    if (!reflect)
     if (0) ; else for (int i=0; i<=int(dist*15); i++)
     {
      int x = p.getScreenX(), y = p.getScreenY();
      double d = (i + fmod(dist*15, 1))/10.0;
      int x1 = int(sin(d*5+time)*((d)<(1) ? (d) : (1))*(64 -18)/2);
      int y1 = int(cos(d*5+time)*((d)<(1) ? (d) : (1))*18*0.7);
      RenderTile(reflect, TILE_GREEN_FRAGMENT, x+x1, y+y1+4);
      RenderTile(reflect, TILE_GREEN_FRAGMENT, x-x1, y-y1+4);
     }
   }
   if (dist > 0 && height)
   {
    int yo = int((1-dist)*(22*1.3));
    if (yo > 22*1.1)
     RenderTile(reflect, TILE_WHITE_TILE, p.getScreenX(), p.getScreenY());
    else if (!reflect)
    {
     RenderTile(reflect, type ? COLLAPSABLE2 : COLLAPSABLE, p.getScreenX(), p.getScreenY());
     RenderTile(reflect, type ? COLLAPSE_DOOR2 : COLLAPSE_DOOR, p.getScreenX(), p.getScreenY()+(reflect ? -yo : yo), yo+6);
     RenderTile(reflect, type ? TILE_BLUE_FRONT : TILE_GREEN_FRONT, p.getScreenX(), p.getScreenY());
    }
    else
    {
     if (yo < 22/2)
     {
      RenderTile(reflect, type ? COLLAPSE_DOOR2 : COLLAPSE_DOOR, p.getScreenX(), p.getScreenY()+(reflect ? -yo : yo), yo);

     }
     RenderTile(reflect, type ? COLLAPSABLE2 : COLLAPSABLE, p.getScreenX(), p.getScreenY());

    }
   }
  }
 }
};

struct PlayerRender : public RenderStage
{
 Pos p;
 Pos target;
 int p_h, target_h;
 int r;
 int type;
 double speed;
 bool dead;

 PlayerRender(Pos a, int h, bool d) : p(a), target(a), p_h(h), target_h(h), r(3), type(0), speed(0), dead(d)
 {}
 PlayerRender(int _r, Pos a, int h1, Pos t, int h2, bool d) : p(a), target(t), p_h(h1), target_h(h2), r(_r), type(0), speed(0.4), dead(d)
 {
  int dist = ((((p.x-target.x)<0 ? -(p.x-target.x) : (p.x-target.x)))>(((p.y-target.y)<0 ? -(p.y-target.y) : (p.y-target.y))) ? (((p.x-target.x)<0 ? -(p.x-target.x) : (p.x-target.x))) : (((p.y-target.y)<0 ? -(p.y-target.y) : (p.y-target.y))));
  if (dist > 1)
   speed *= 1.5;
  if(dist==0)
   speed = 0;
 }

 virtual int GetDepth(double time)
 {
  double f = speed ? time / speed : 1;
  if (f>1) f=1;
  if (f==1) dead = this->dead;

  if (f==1 || f>0.5 && p_h>target_h)
   return target.x+target.y*2;
  return ((target.x+target.y*2)>(p.x+p.y*2) ? (target.x+target.y*2) : (p.x+p.y*2));
 }

 void Render(RenderObject* , double time, bool reflect)
 {
  bool dead = false;
  double f = speed ? time / speed : 1;
  if (f>1) f=1;
  if (f==1) dead = this->dead;

  int x = p.getScreenX();
  int y = p.getScreenY();
  int x2 = target.getScreenX();
  int y2 = target.getScreenY();
  int h = 0;
  int shadow_h = (int)((p_h+(target_h-p_h)*f)*26);

  if (x==x2 && y==y2 && p_h!=target_h)
  {
   h = 26 - GetLiftHeight(time, p_h ? LIFT_DOWN : LIFT_UP);
  }
  else
  {

   int dist = ((((p.x-target.x)<0 ? -(p.x-target.x) : (p.x-target.x)))>(((p.y-target.y)<0 ? -(p.y-target.y) : (p.y-target.y))) ? (((p.x-target.x)<0 ? -(p.x-target.x) : (p.x-target.x))) : (((p.y-target.y)<0 ? -(p.y-target.y) : (p.y-target.y))));
   int arc = dist*dist;
   int h1 = p_h * 26;;
   int h2 = target_h * 26;
   if (dist==2 && h1!=0)
   {
    arc += h2 ? 1 : 3;
    h1 = 0;
    shadow_h = f>=0.7 ? int(shadow_h*(f-0.7)/0.3) : 0;
   }
   if (dist==0)
    arc = speed > 0.4 ? 7 : 2;

   h = (int)(h1+(h2-h1)*f);



   {

    h += (int)(f*(1-f)*26*arc);
   }

   if (type==2)
    h=0;
  }

  if (!dead)
  {
   int frame = 0;
   if (type==2 && f<1)
   {


    frame = 0;
   }
   else if (f==1 || x==x2 && y==y2)
    frame = 0;
   else if (f > 0.7)
    frame = 0;
   else
   {
    frame = type ? 2 : 1;
    if (f<0.1 || f>0.6)
     frame += 2;
   }

   if (!reflect)
    RenderTile( false, TILE_SPHERE,
     (int)(x+(x2-x)*f),
     (int)(y+(y2-y)*f) - shadow_h
    );

   RenderGirl(
    reflect,
    r, frame,
    (int)(x+(x2-x)*f),
    (int)(y+(y2-y)*f),
    h
    );

  }






 }
};


struct HexPuzzle : public State
{
 struct Undo
 {

  struct TileChange
  {
   Pos p;
   Tile t;
   int item;

   TileChange()
   {}
   TileChange(Pos _p, Tile _t, int _i) : p(_p), t(_t), item(_i)
   {}
   void Restore(HexPuzzle* w)
   {
    w->SetTile(p,t,false,false);
    w->SetItem(p,item,false,false);
   }
  };

  TileChange t[64];
  Pos playerPos;
  Dir playerMovement;
  int numT;
  int numItems[2];
  int score;
  double time;
  double endTime;

  void Add(TileChange const & tc)
  {
   if (0) ; else for (int i=0; i<numT; i++)
    if (t[i].p==tc.p)
     return;
   if (numT>=64)
    FATAL("numT>=MAX_TILECHANGE");
   else
    t[numT++] = tc;
  }
  void New(Dir pmove, Pos & pp, int* items, double t, int sc)
  {
   numItems[0] = items[0];
   numItems[1] = items[1];
   playerPos = pp;
   playerMovement = pmove;
   score = sc;
   time = t;
   numT = 0;
  }
  void Restore(HexPuzzle* w)
  {
   if (0) ; else for (int i=numT-1; i>=0; i--)
    t[i].Restore(w);
   w->dead = false;
   w->win = false;
   w->player = playerPos;
   w->player_items[0] = numItems[0];
   w->player_items[1] = numItems[1];
   w->player_score = score;


  }
 };


 char* special[30][30];
 Tile map[30][30];
 int32_t map_item[30][30];
 int tileCount[NumTileTypes];
 int32_t levelPar, levelDiff;
 int turboAnim;
 Pos player;
 int player_items[2];
 int player_score;
 int numComplete, numLevels, numMastered, numLevelsFound;
 bool dead;
 bool win;
 int winFinal;

 SaveState progress;

 WorldRenderer renderer;
 double time;
 double undoTime;


 Undo undo[6];
 int numUndo;
 LevelInfo* currentLevelInfo;

 char currentFile[1000];

 ~HexPuzzle()
 {
  FreeGraphics();
 }

 LevelInfo* GetLevelInfo(const char* f)
 {
  if (strstr(f, "Levels\\") == f)
   f += 7;
  if (currentLevelInfo!=0 && strcmp(currentLevelInfo->file, f)==0)
   return currentLevelInfo;

  if (f[0]=='_')
  {
   int t = atoi(f+1);
   if (t <= numComplete)
    return 0;

   static char tmp1[1000];
   static LevelInfo tmp = {0, "", tmp1};
   sprintf(tmp1, ngettext("Complete 1  more level  to unlock!", "Complete %d  more levels  to unlock!", t-numComplete), t-numComplete);
   return &tmp;
  }

  if (0) ; else for (unsigned int i=0; i<sizeof(levelNames)/sizeof(levelNames[0]); i++)
   if (strcmp(f, levelNames[i].file)==0)
    return &levelNames[i];
  static LevelInfo tmp = {0, "", gettext ("<<NO NAME>>")};
  return &tmp;
 }
# 1638 "hex_puzzzle.cpp"
 void InitSpecials()
 {
  numComplete = numLevels = numMastered = numLevelsFound = 0;
  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
    ActivateSpecial(Pos(i,j), 0);
  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
    ActivateSpecial(Pos(i,j), 2);
  numComplete = numLevels = numMastered = numLevelsFound = 0;
  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
    ActivateSpecial(Pos(i,j), 0);

 }
 void DoHints()
 {

   if (strcmp(mapname, currentFile)==0)
   {


    if (numComplete >= 75 && !progress.general.scoringOn)
    {
     HintMessage::FlagTile(26);
     progress.general.scoringOn = 1;
     InitSpecials();
    }
    HintMessage::FlagTile(25);
   }
   else
   {
    if (0) ; else for (int i=0; i<30; i++)
     if (0) ; else for (int j=0; j<30; j++)
     {
      int t = GetTile(Pos(i,j));
      int item = GetItem(Pos(i,j));
      if (t)
       HintMessage::FlagTile(t);
      if (item)
       HintMessage::FlagTile(item+20);
     }
    HintMessage::FlagTile(EMPTY);
   }

  hintsDone = true;
 }
 void ResetLevel()
 {
  hintsDone = false;

  UpdateCursor(Pos(-1,-1));

  isMap = false;

  player_score = 0;

  numUndo = 0;
  undoTime = -1;

  dead = false;
  win = false;
  winFinal = false;
  player_items[0] = player_items[1] = 0;

  if (strlen(currentSlot) == 0)
  {
   new TitleMenu();
   new Fader(1, -3);
  }
  else
  {
   if (!isFadeRendering && time!=0)
   {
    renderer().Add(new FadeRender(-1), time);
    time += 0.5;
   }
  }


  renderer.Reset(time);
  renderer.Wipe();

  if (0) ; else for (int t=0; t<NumTileTypes; t++)
   tileCount[t] = 0;

  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
   {
    Pos p(i,j);
    int item = GetItem(p);

     renderer(p,true).Add(new ItemRender(item, GetTile(p)==EMPTY, p), time);
   }

  InitSpecials();

  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
   {
    Pos p(i,j);
    int t = GetTile(p);
    tileCount[t]++;

    if (isMap)
     t = EMPTY;


     renderer(p).Add(new TileRender(t, p), time);
   }

  if (!isMap)
   renderer.player.Add(new PlayerRender(player, GetHeight(player), dead), time);
  else
   renderer.player.Add(new PlayerRender(Pos(-100,-100), 0, true), time);


  int bounds[4] = {player.getScreenX(),player.getScreenX(),player.getScreenY(),player.getScreenY()};
  if (0) ; else for (int i=0; i<30; i++)
   if (0) ; else for (int j=0; j<30; j++)
   {
    Pos p(i,j);
    if (map[i][j] !=0 || map_item[i][j]!=0)
    {
     int x1 = p.getScreenX();
     int y1 = p.getScreenY();
     int x2 = x1 + 64;
     int y2 = y1 + (18*2);
     y1 -= (18*2);

     if (x1<bounds[0]) bounds[0] = x1;
     if (x2>bounds[1]) bounds[1] = x2;
     if (y1<bounds[2]) bounds[2] = y1;
     if (y2>bounds[3]) bounds[3] = y2;
    }
   }

  int sx, sy;
  if (isMap)
  {
   sx = bounds[0] - int((64 -18)*6.35);
   sy = (bounds[3] + bounds[2] - 480) / 2 - (18*2)/2;
  }
  else
  {
   sx = (bounds[1] + bounds[0] - 640) / 2 - 64/2;
   sy = (bounds[3] + bounds[2] - 480) / 2 - (18*2)/2;
  }
  if (isMap)
  {
   initScrollX = sx;
   initScrollY = sy;
   if (mapScrollX==0)
    mapScrollX = sx;
   else
    sx = mapScrollX;
  }



  renderer().Add(new ScrollRender(sx, sy), time);
  renderer().Add(new FadeRender(1), time);
  if (time != 0)
   time -= 0.5;
 }

 char* ReadAll(FILE* f)
 {
  int size;



  fseek(f, 0, 2);
  size = ftell(f);
  fseek(f, 0, 0);
  char* c = loadPtr = new char [size];
  endLoad = loadPtr + size;
  fread(c, 1, size, f);
  return c;
 }

 static char *loadPtr, *endLoad;
 static unsigned int fread_replace(void* d, unsigned int size, unsigned int num, FILE*)
 {
  unsigned int remain = (endLoad - loadPtr) / size;
  if (remain < num) num = remain;
  memcpy(d, loadPtr, size*num);
  loadPtr += size*num;
  return num;
 }

 int GetPar(const char * level, bool getdiff=false)
 {
  if (strcmp(level, currentFile)==0)
   return getdiff ? levelDiff : levelPar;


   PackFile1::Entry* e = levelFiles.Find(level);
   if (!e) return 999;
   loadPtr = (char*)e->Data();
   endLoad = loadPtr + e->DataLen();
   FILE* f = 0;





  typedef unsigned int _fn(void*, unsigned int, unsigned int, FILE*);
  _fn * fn = (loadPtr ? (_fn*)fread_replace : (_fn*)fread);

  int32_t par = 99999, diff = 0;
  int16_t version;

  if (!f && !loadPtr)
   return getdiff ? diff : par;

  fn(&version, 2, 1, f);

  if (fn(&par, sizeof(par), 1, f) != 1)
   par = 99999;
  else
   par = (par);
  size_t ret = fn(&diff, sizeof(diff), 1, f);
  diff = (diff);
  if (ret != 1 || diff<0 || diff>10)
   diff = 0;


   loadPtr = endLoad = 0;





  return getdiff ? diff : par;
 }

 bool LoadSave(const char * filename, bool save)
 {
  if (!filename)
   return false;

  if (!save)
  {
   showScoring = false;
   LevelSave* l = progress.GetLevel(filename, true);
   if (progress.general.scoringOn && l && l->Completed() )
    showScoring = true;
  }


   if (!save)
   {
    PackFile1::Entry* e = levelFiles.Find(filename);
    if (!e) return false;

    if (currentFile != filename)
     strcpy(currentFile, filename);
    currentLevelInfo = GetLevelInfo(currentFile);

    loadPtr = (char*)e->Data();
    endLoad = loadPtr + e->DataLen();
    _LoadSave(__null, save);
    loadPtr = endLoad = 0;

    return true;
   }
# 1931 "hex_puzzzle.cpp"
  return false;
 }






 void _LoadSave(FILE* f, bool save)
 {
  typedef unsigned int _fn(void*, unsigned int, unsigned int, FILE*);
  _fn * fn = save ? (_fn*)fwrite : (loadPtr ? (_fn*)fread_replace : (_fn*)fread);


  int version = 4;
  if (save)
   fprintf(f, "%d\n", version);
  else
  {
   char c;
   if (fn(&c, 1, 1, f) != 1)
    return;
   version = c-'0';


   fn(&c, 1, 1, f);
  }

  if (!save)
  {
   if (0) ; else for (int i=0; i<30; i++)
    if (0) ; else for (int j=0; j<30; j++)
    {
     delete [] special[i][j];
     special[i][j] = 0;
    }
  }

  if (version==1)
  {
   if (0) ; else for (int i=0; i<30; i++)
    if (0) ; else for (int j=0; j<30; j++) {
     map[i][j] = (map[i][j]);
     fn(&map[i][j], sizeof(map[i][j]), 1, f);
     map[i][j] = (map[i][j]);
    }

   player.x = (player.x);
   player.y = (player.y);
   fn(&player, sizeof(player), 1, f);
   player.x = (player.x);
   player.y = (player.y);

   if (0) ; else for (int i=0; i<30; ++i)
    if (0) ; else for (int j=0; j<30; ++j)
     map_item[i][j] = (map_item[i][j]);
   if (fn(map_item, sizeof(map_item), 1, f) == 0)
    memset(map_item, 0, sizeof(map_item));
   if (0) ; else for (int i=0; i<30; ++i)
    if (0) ; else for (int j=0; j<30; ++j)
     map_item[i][j] = (map_item[i][j]);
  }
  else if (version>=2 && version<=4)
  {
   unsigned char bounds[4];
   if (save)
   {
    bounds[0]=bounds[1]=player.x;
    bounds[2]=bounds[3]=player.y;
    if (0) ; else for (int i=0; i<30; i++)
     if (0) ; else for (int j=0; j<30; j++)
      if (map[i][j] !=0 || map_item[i][j]!=0 || special[i][j]!=0)
      {
       if (i<bounds[0]) bounds[0] = i;
       if (i>bounds[1]) bounds[1] = i;
       if (j<bounds[2]) bounds[2] = j;
       if (j>bounds[3]) bounds[3] = j;
      }
   }
   else
   {
    memset(map, 0, sizeof(map));
    memset(map_item, 0, sizeof(map_item));
   }

   if (version>=3) {
    levelPar = (levelPar);
    fn(&levelPar, 1, sizeof(levelPar), f);
    levelPar = (levelPar);
   }
   else if (!save)
    levelPar = 0;

   if (version>=4) {
    levelDiff = (levelDiff);
    fn(&levelDiff, 1, sizeof(levelDiff), f);
    levelDiff = (levelDiff);
   }
   else if (!save)
    levelDiff = 0;

   fn(bounds, sizeof(bounds), 1, f);
   player.x = (player.x);
   player.y = (player.y);
   fn(&player, sizeof(player), 1, f);
   player.x = (player.x);
   player.y = (player.y);

   int offsetx=0, offsety=0;

   if (!save && bounds[1]-bounds[0]<15)
   {


    offsetx = 640/2/(64 -18) + 1 - (bounds[0]+bounds[1]/2);
    offsety = 480/2/(18*2) + 640/2/(64 -18) - (bounds[2]+bounds[3]/2);
    offsetx = ((0)>(offsetx) ? (0) : (offsetx));
    offsety = ((0)>(offsety) ? (0) : (offsety));




   }
   bounds[0] += offsetx;
   bounds[1] += offsetx;
   bounds[2] += offsety;
   bounds[3] += offsety;
   player.x += offsetx;
   player.y += offsety;

   if (0) ; else for (int i=bounds[0]; i<=bounds[1]; i++)
    if (0) ; else for (int j=bounds[2]; j<=bounds[3]; j++)
    {
     unsigned char comp = map[i][j] | (map_item[i][j]<<5);
     fn(&comp, sizeof(comp), 1, f);
     map[i][j] = comp & 0x1f;
     map_item[i][j] = (comp >> 5) & 3;
    }

   if (save)
   {
    if (0) ; else for (int i=bounds[0]; i<=bounds[1]; i++)
     if (0) ; else for (int j=bounds[2]; j<=bounds[3]; j++)
      if (special[i][j])
      {
       int16_t len = strlen(special[i][j]);
       unsigned char x=i, y=j;
       fn(&x, sizeof(x), 1, f);
       fn(&y, sizeof(y), 1, f);
       len = (len);
       fn(&len, sizeof(len), 1, f);
       len = (len);
       fn(special[i][j], 1, len, f);
      }
   }
   else
   {
    while(1){
     int16_t len;
     unsigned char x, y;
     if (!fn(&x, sizeof(x), 1, f))
      break;
     fn(&y, sizeof(y), 1, f);
     x += offsetx; y += offsety;
     fn(&len, sizeof(len), 1, f);
     len = (len);
     if (len<0) break;
     char* tmp = new char[len+1];
     tmp[len] = 0;
     fn(tmp, 1, len, f);

     SetSpecial(Pos(x,y), tmp, true, false);
    }
   }
  }
  else
   return;

  ResetLevel();


  if (isMap)
  {
   progress.general.completionPercentage = numComplete*100/numLevels;
   progress.general.masteredPercentage = numMastered*100/numLevels;
   LoadSaveProgress(true);
  }
 }

 void SetTile(Pos const & p, Tile t, bool updateRenderer=true, bool undoBuffer=true)
 {
  if (p.x<0 || p.x>30)
   return;
  if (p.y<0 || p.y>30)
   return;
  if (map[p.x][p.y] == t)
   return;
  if (map[p.x][p.y] == t)
   return;

  tileCount[map[p.x][p.y]]--;
  tileCount[t]++;

  if (undoBuffer)
   undo[numUndo].Add(Undo::TileChange(p,GetTile(p),GetItem(p)));

  map[p.x][p.y] = t;

  if (updateRenderer)
   renderer(p).Add(new TileRender(t, p), time);
 }

 Tile GetTile(Pos const & p)
 {
  if (p.x<0 || p.x>=30)
   return EMPTY;
  if (p.y<0 || p.y>=30)
   return EMPTY;
  return map[p.x][p.y];
 }

 int GetHeight(Pos const & p)
 {
  return tileSolid[GetTile(p)]==1;
 }

 char* GetSpecial(Pos const & p)
 {
  if (p.x<0 || p.x>=30)
   return __null;
  if (p.y<0 || p.y>=30)
   return __null;
  return special[p.x][p.y];
 }

 void SetSpecial(Pos const & p, char * d, bool use_pointer=false, bool auto_activate=true)
 {
  if (p.x<0 || p.x>=30 || p.y<0 || p.y>=30)
  {
   if (use_pointer)
    delete [] d;
   return;
  }

  delete [] special[p.x][p.y];
  if (!use_pointer && d)
  {

   special[p.x][p.y] = new char [strlen(d) + 1];
   strcpy(special[p.x][p.y], d);
  }
  else
   special[p.x][p.y] = d;

  if (special[p.x][p.y]==0)
   renderer(p,true).Add(new ItemRender(GetItem(p), GetTile(p)==EMPTY, p), time);
  else if (auto_activate)
   ActivateSpecial(p, 0);
 }

 int GetLevelState(Pos const & p, int recurse=0)
 {
  char* x = GetSpecial(p);
  if (!x) return 0;

  LevelSave* l = progress.GetLevel(x, false);

  int t = 1;

  if (strcmp(x, "Levels\\0_green\\triangular.lev")==0)
   t = 2;
  if (x[0]=='_' && l && l->unlocked)
   t=3;

  if (l && l->Completed())
  {
   t = 3;

   if (recurse)
    return t;

   int par = GetPar(x);
   if (progress.general.scoringOn && l->PassesPar( par ))
    t = l->BeatsPar( par ) ? 40 : 4;
  }
  if (recurse)
   return t;

  int adj=0;
  if (0) ; else for (Dir d=0; d<6; d++)
  {
   int i = GetLevelState(p+d, 1);

   if (i>=1 && t>2 || t>=1 && i>2)
   {
    adj |= 1<<d;
    if (t==1)
     t = 2;
   }
  }

  return t | adj<<8;
 }

 void ActivateSpecial(Pos const & p, int type)
 {
  if (p.x<0 || p.x>=30 || p.y<0 || p.y>=30)
   return;

  char * x = special[p.x][p.y];

  if (x==0 || x[0]==0)
   return;

  if (type==2 && x[0]=='_')
  {
   int t = GetLevelState(p);
   int target = atoi(x+1), targetM = 0;
   if (target>1000) targetM=target=target-100;
   if (t > 1 && numComplete >= target && numMastered >= targetM)
   {
    LevelSave* l = progress.GetLevel(x, true);
    if (!l->unlocked)
    {
     l->unlocked = true;

     renderer(p, true).Add(new LevelSelectRender(p, 5, GetLevelState(p)>>8), time+0.01);
     renderer().Add(new ExplosionRender(p, 0), time + 0.6);
     renderer().Add(new ExplosionRender(p, 1), time + 1.1);
     renderer(p, true).Add(new LevelSelectRender(p, -1, GetLevelState(p)>>8), time + 1.1);
    }
   }
  }

  if (type==0)
  {
   if (x[0]=='_')
   {
    int t = GetLevelState(p);
    int unlock = progress.GetLevel(x, true)->unlocked;
    LevelSelectRender* lsr = new LevelSelectRender( p, unlock ? -1 : (t>>8) ? 5 : 1, t>>8 );
    if ((t>>8) && p.x > mapRightBound) mapRightBound = p.x;




     SetTile(p, EMPTY, true, false);

    renderer(p,true).Add(lsr, time);
   }
   else
   {


    int t = GetLevelState(p);
    numLevels++;
    if (t && !GetItem(p))
    {
     if (!isMap)
     {
      isMap = true;
      mapRightBound = 0;
     }
     currentLevelInfo = 0;

     if ((t&0xff)>=2)
     {
      LevelSave* l = progress.GetLevel(x, true);
      if (!l->unlocked)
      {
       l->unlocked = true;

       renderer(p, true).Add(new LevelSelectRender(p, -1, 0), time+0.01);
       renderer().Add(new ExplosionRender(p, 0), time + 0.6);
       renderer(p, true).Add(new LevelSelectRender(p, t & 0xff, t>>8), time + 0.6);
      }

      numLevelsFound++;
      if (p.x > mapRightBound) mapRightBound = p.x;
     }
     if ((t&0xff)>=3)
      numComplete++;
     if ((t&0xff)>=4)
      numMastered++;

     LevelSelectRender* lsr = new LevelSelectRender( p, t & 0xff, t>>8 );
# 2329 "hex_puzzzle.cpp"
      SetTile(p, EMPTY, true, false);


     renderer(p,true).Add(lsr, time);
    }
   }
  }

  if (type==1 && x[0]!='_')
  {
   int t = GetLevelState(p);
   if (t>1)
   {
    LoadSave(x, false);
   }
  }
 }

 void SetItem(Pos const & p, int t, bool updateRenderer=true, bool undoBuffer=true)
 {
  if (p.x<0 || p.x>30)
   return;
  if (p.y<0 || p.y>30)
   return;
  if (map_item[p.x][p.y] == t)
   return;

  if (undoBuffer)
   undo[numUndo].Add(Undo::TileChange(p,GetTile(p),GetItem(p)));

  map_item[p.x][p.y] = t;

  if (updateRenderer)
   renderer(p,true).Add(new ItemRender(t, GetTile(p)==EMPTY, p), time);
 }

 Tile GetItem(Pos const & p)
 {
  if (p.x<0 || p.x>=30)
   return EMPTY;
  if (p.y<0 || p.y>=30)
   return EMPTY;
  return map_item[p.x][p.y];
 }

 void LoadSaveProgress(bool save)
 {
  FILE* f = file_open(currentSlot, save ? "wb" : "rb");
  if (f)
  {
   progress.LoadSave(f, save);
   fclose(f);
  }
  else
  {
   if (!save)
    progress.Clear();
  }
 }
 void LoadProgress()
 {
  LoadSaveProgress(false);
 }
 void SaveProgress()
 {
  LoadSaveProgress(true);
 }

 SDL_Surface* Load(const char * bmp, bool colourKey=true)
 {
  typedef unsigned int uint32;
  uint32* tmp = 0;

  SDL_Surface * g = 0;
# 2458 "hex_puzzzle.cpp"
  FILE* f = file_open(bmp, "rb");
  if (!f) FATAL("Unable to open file", bmp);

  int16_t w,h;
  fread(&w, sizeof(w), 1, f);
  fread(&h, sizeof(h), 1, f);
  w = (w);
  h = (h);
  if (w>1500 || h>1500 || w<=0 || h<=0) FATAL("Invalid file", bmp);

  tmp = new uint32[(int)w*h];

  uint32 c = 0;
  uint32 cnt = 0;
  if (0) ; else for (int p=0; p<(int)w*h; p++)
  {
   if (cnt)
    cnt -= 0x1;
   else
   {
    fread(&c, sizeof(c), 1, f);
    c = (c);
    cnt = c >> 24;
    if (cnt==255) {
     fread(&cnt, sizeof(cnt), 1, f);
     cnt = (cnt);
    }
   }
   tmp[p] = c | 0xff000000;
  }

  g = SDL_CreateRGBSurfaceFrom(tmp, w, h, 32, w*4,
   0xff0000,
   0xff00,
   0xff,
   0xff000000 );

  fclose(f);


  if (!g) FATAL("Unable to create SDL surface");
  if (colourKey)
   SDL_SetColorKey(g, 0x00001000, SDL_MapRGB(g->format, 31 | (0xff030303>>16)&255, 37 | (0xff030303>>8)&255, 135 | (0xff030303>>0)&255));
  SDL_Surface * out = SDL_DisplayFormat(g);
  SDL_FreeSurface(g);
  delete [] tmp;
  if (!out) FATAL("Unable to create SDL surface (SDL_DisplayFormat)");
  return out;
 }


  PackFile1 levelFiles;

 HexPuzzle()
 {
  SDL_WM_SetCaption("Hex-a-hop", 0);

  time = 0;


   FILE* f = file_open("levels.dat", "rb");
   if (!f)
    FATAL("Unable to open file", "levels.dat");
   levelFiles.Read(f);
   fclose(f);


  LoadGraphics();

  isMap = false;
  editMode = false;

  currentLevelInfo = 0;

  editTile = 0;
  levelPar = 0;
  levelDiff = 5;
  turboAnim = 0;

  memset(map, 0, sizeof(map));
  memset(map_item, 0, sizeof(map_item));
  memset(special, 0, sizeof(special));

  LoadProgress();





  LoadMap();
 }

 void LoadMap()
 {

   progress.GetLevel("Levels\\0_green\\triangular.lev", true)->unlocked = 1;
   if (!progress.GetLevel("Levels\\0_green\\triangular.lev", true)->Completed())
   {
    LoadSave("Levels\\0_green\\triangular.lev", false);
    return;
   }



  LoadSave(mapname, false);
 }

 void Render()
 {
  if (!activeMenu || activeMenu->renderBG)
  {
   SDL_Rect src = {0,0,screen->w,screen->h};
   SDL_Rect dst = {0,0,screen->w,screen->h};
   if (isRenderMap)
   {
    int boundW = mapBG->w;

    boundW = ((boundW)<((mapRightBound+4) * (64 -18) - 18) ? (boundW) : ((mapRightBound+4) * (64 -18) - 18));

    src.x = scrollX - initScrollX;
    if (src.x+src.w > boundW)
    {
     int diff = src.x+src.w - boundW;
     src.x -= diff;
     if (isMap)
      scrollX -= diff;
    }
    if (src.x < 0)
    {
     if (isMap)
      scrollX -= src.x;
     src.x = 0;
    }


    if (isMap)
     mapScrollX = scrollX;

    SDL_UpperBlit(mapBG, &src, screen, &dst);
   }
   else
    SDL_UpperBlit(gradient, &src, screen, &dst);

   renderer.Render(time, true);

   if (!hintsDone && !isFadeRendering)
   {
    DoHints();
   }

   if (1)
   {
    SDL_Rect src = {0,480 -1,640,1};
    SDL_Rect dst = {0,480 -1,640,1};
    if (0) ; else for (int i=0; i<480; i++)
    {
     dst.x = src.x = 0;
     dst.y = src.y = 480 -1-i;
     src.w = 640;
     src.h = 1;

     if (isRenderMap)
     {
      src.x += (int)( sin(i*0.9 + time*3.7) * sin(i*0.3 + time*0.7)*4 );
      src.y += (int)( (sin(i*0.3 - time*2.2) * sin(i*0.48 + time*0.47) - 1) * 1.99 );
     }
     else
     {
      src.x += (int)( sin(i*0.5 + time*6.2) * sin(i*0.3 + time*1.05) * 5 );
      src.y += (int)( (sin(i*0.4 - time*4.3) * sin(i*0.08 + time*1.9) - 1) * 2.5 );
     }
     SDL_UpperBlit(screen, &src, screen, &dst);
    }
   }

   if(isRenderMap)
    SDL_UpperBlit(mapBG2, &src, screen, &dst);

   renderer.Render(time, false);

   if (!isRenderMap && !isMap && !isFadeRendering)
   {
    int v[3] = {player_items[0], player_items[1], player_score};
    if (numUndo > 1 && time < undo[numUndo-2].endTime)
    {
     int i = numUndo-1;
     while (i>1 && time<undo[i-1].time)
      i--;
     v[0] = undo[i].numItems[0];
     v[1] = undo[i].numItems[1];
     v[2] = undo[i].score;
    }
    if (numUndo>1 && time < undo[0].time)
     v[0]=v[1]=v[2]=0;
# 2663 "hex_puzzzle.cpp"
    if (showScoring)
     Print(0, 480 -25, gettext (" Par: %d   Current: %d"), levelPar, v[2]);

    if (v[0])
     Print(0,0,gettext (" Anti-Ice: %d"), v[0]);
    else if (v[1])
     Print(0,0,gettext (" Jumps: %d"), v[1]);

   }
   if (isRenderMap && isMap && !isFadeRendering)
   {






    if (numComplete==numLevels && progress.general.endSequence>0)
     Print(0, 480 -25, gettext (" %d%% Mastered"), numMastered*100/numLevels);
    else
     Print(0, 480 -25, gettext (" %d%% Complete"), numComplete*100/numLevels);

    if (numMastered >= numLevels && progress.general.endSequence < 2)
    {
     progress.general.endSequence = 2;
     LoadSaveProgress(true);

     new Fader(-1, -7, 0.3);
    }
    if (numComplete >= numLevels && progress.general.endSequence < 1)
    {
     progress.general.endSequence = 1;
     LoadSaveProgress(true);

     new Fader(-1, -5, 0.3);
    }

   }
   if ((currentLevelInfo || noMouse) && isMap && isRenderMap && !activeMenu && isFadeRendering<=0)
   {
    Pos p;
    if (noMouse)
     p = keyboardp;
    else
     p = mousep;
    int pad = 640/80;

    SDL_Rect dst = {pad, 480 -(18*2)-pad, 0, 0};


    dst.x = p.getScreenX() - scrollX;
    dst.y = p.getScreenY() - scrollY - 25*3 - 25/2;



    RenderTile(false, 0, p.getScreenX(), p.getScreenY());




    if (currentLevelInfo)
    {
     keyboardp = p;

     PrintC(true, dst.x, dst.y - 25/4, currentLevelInfo->name);

     if (currentLevelInfo->file[0]!=0)
     {
      if (player_score > 0)
      {
       if (progress.general.scoringOn)
       {
        PrintC(false, dst.x, dst.y + 25*4 - 25/4, gettext ("Best:% 3d"), player_score);
        PrintC(false, dst.x, dst.y + 25*5 - 25/4, gettext ("Par:% 3d"), levelPar);
       }
       else
        PrintC(false, dst.x, dst.y + 25*4 - 25/4, gettext ("Completed"), player_score);
      }
      else
       PrintC(false, dst.x, dst.y + 25*4 - 25/4, gettext ("Incomplete"), player_score);
     }
    }
   }


   if (win && numUndo > 0 && time > undo[numUndo-1].endTime + 2)
   {
    if (currentFile[0] && winFinal==0)
    {
     LevelSave* l = progress.GetLevel(currentFile, true);

     new WinLoseScreen(true, player_score, showScoring ? levelPar : 0, l && showScoring && l->Completed() ? l->GetScore() : 0);

     if (l->IsNewCompletionBetter(player_score))
     {
      l->SetScore(player_score);

      l->SetSolution(numUndo);

      if (0) ; else for (int i=0; i<numUndo; i++)
       l->SetSolutionStep(i, undo[i].playerMovement);
     }

     SaveProgress();
    }

    winFinal = 1;
   }
   else
    winFinal = 0;


   if (win && numUndo > 0 && time > undo[numUndo-1].endTime && !winFinal)
   {
    double t = (time - undo[numUndo-1].endTime) / 2;
    t=1-t;
    t*=t*t;
    t=1-t;
    int y = 480/3 - 25 + 1;
    y = 480 + int((y-480)*t);
    PrintC(true, 640/2, y, gettext ("Level Complete!"));
   }
  }

  if (activeMenu)
   activeMenu->Render();

  if (!noMouse)
  {

   if (editMode)
   {
    RenderTile(false, editTile, mousex+scrollX, mousey+scrollY);
   }
  }
 }

 int Count(Tile t)
 {
  return tileCount[t];
 }
 int Swap(Tile t, Tile t2)
 {
  const int num = Count(t) + Count(t2);
  if (t==t2 || num==0)
   return Count(t);

  int count=0;
  if (0) ; else for (int x=0; x<30; x++)
   if (0) ; else for (int y=0; y<30; y++)
   {
    if (GetTile(Pos(x,y))==t)
    {
     count++;
     SetTile(Pos(x,y), t2);
    }
    else if (GetTile(Pos(x,y))==t2)
    {
     count++;
     SetTile(Pos(x,y), t);
    }
    if (count==num)
     return count;
   }
  return count;
 }
 int Replace(Tile t, Tile t2)
 {
  const int num = Count(t);
  if (t==t2 || num==0)
   return num;

  int count=0;
  if (0) ; else for (int x=0; x<30; x++)
   if (0) ; else for (int y=0; y<30; y++)
   {
    Pos p(x,y);
    if (GetTile(p)==t)
    {
     count++;

     SetTile(p, t2, false);

     if (t==COLLAPSE_DOOR && t2==COLLAPSABLE)
      renderer(p).Add(new BuildRender(p, -1, 1, 1), time + (rand() & 255)*0.001);
     else if (t==COLLAPSE_DOOR2 && t2==COLLAPSABLE2)
      renderer(p).Add(new BuildRender(p, -1, 1, 1, 1), time + (rand() & 255)*0.001);
     else
      SetTile(p, t2);

     if (count==num)
      return count;
    }
   }
  return count;
 }

 Tile editTile;
 bool editMode;
 void ResetUndo()
 {
  UndoDone();
  undoTime = -1;
  numUndo = 0;
  win = false;
 }

 void UpdateCursor(Pos const & s)
 {
  static Pos _s;
  if (s.x!=_s.x || s.y!=_s.y)
  {
   _s = s;

   char* sp = GetSpecial(s);
   char tmp[1000];
   tmp[0]='\0';
   if (sp)
   {
    if (isMap)
    {
     currentLevelInfo = 0;
     levelPar = player_score = -1;
     if (GetLevelState(s)>=2)
     {
      LevelSave* l = progress.GetLevel(sp, true);
      if (l)
      {
       currentLevelInfo = GetLevelInfo(sp);
       levelPar = GetPar(sp);
       player_score = l->GetScore();
      }
     }
    }





   }
   else if (currentFile[0])
   {



    if (isMap)
     currentLevelInfo = 0;
   }
  }
 }

 virtual void Mouse(int x, int y, int dx, int dy, int button_pressed, int button_released, int button_held)
 {
  if (activeMenu)
  {
   activeMenu->Mouse(x,y,dx,dy,button_pressed,button_released,button_held);
   return;
  }

  if (isFadeRendering)
   return;



  if (button_pressed==2 || button_pressed==4 && isMap)
  {
   KeyPressed(SDLK_ESCAPE, 0);
   keyState[SDLK_ESCAPE] = 0;
   return;
  }


  x += scrollX;
  y += scrollY;

  Pos s = Pos::GetFromWorld(x,y);
  if (tileSolid[GetTile(Pos::GetFromWorld(x,y+22))] == 1)
   s = Pos::GetFromWorld(x,y+22);

  mousep = s;

  UpdateCursor(s);
# 2954 "hex_puzzzle.cpp"
  if (!editMode)
  {
   if (isMap && (button_pressed & 1))
   {
    ActivateSpecial(s, 1);
    return;
   }
   if (!isMap && win && winFinal)
   {
    if (button_pressed & 1)
    {
     LoadMap();
     return;
    }
   }
   if(!isMap)
   {
    if((button_pressed & 1) || (button_held & 1) && (numUndo==0 || time>=undo[numUndo-1].endTime))
    {
     if(s.x==player.x && s.y==player.y)
     {

      if (button_pressed & 1)
       Input(-1);
     }
     else if(s.x==player.x && s.y<player.y)
      Input(0);
     else if(s.x==player.x && s.y>player.y)
      Input(3);
     else if(s.y==player.y && s.x<player.x)
      Input(5);
     else if(s.y==player.y && s.x>player.x)
      Input(2);
     else if(s.y+s.x==player.y+player.x && s.x>player.x)
      Input(1);
     else if(s.y+s.x==player.y+player.x && s.x<player.x)
      Input(4);
    }
    if ((button_pressed & 4) || (button_held & 4) && (undoTime < 0))
     Undo();
   }
   return;
  }
# 3088 "hex_puzzzle.cpp"
 }

 void CheckFinished()
 {
  bool slow = false;
  if (Count(COLLAPSABLE)==0)
  {
   if (Replace(COLLAPSE_DOOR, COLLAPSABLE) == 0)
    win = true;
   else
    slow = true;
   Replace(SWITCH, NORMAL);
  }
  else
   win = false;

  if (Count(COLLAPSABLE2)==0)
   if (Replace(COLLAPSE_DOOR2, COLLAPSABLE2))
    slow = true;

  if (slow)
   time += 1;
 }
 bool Collide(Pos p, bool high)
 {
  Tile t = GetTile(p);



   if (!high)
    return tileSolid[t]==1;
   else
    return false;

 }
 void Undo()
 {
  if (numUndo==0) return;

  UndoDone();

  numUndo--;

  if (time > undo[numUndo].endTime)
   time = undo[numUndo].endTime;
  undoTime = undo[numUndo].time;

  undo[numUndo].Restore(this);
 }
 void UndoDone()
 {
  if (undoTime < 0)
   return;
  renderer.Reset(undoTime);
  time = undoTime;
  undoTime = -1;
 }
 void ScoreDestroy(Pos p)
 {
  Tile t = GetTile(p);
  if (t==COLLAPSABLE || t==COLLAPSE_DOOR)
  {}
  else if (t != EMPTY)
  {
   player_score += 10;
  }
 }

 bool LaserTile(Pos p, int mask, double fireTime)
 {
  if (&renderer(p) == &renderer(Pos(-1,-1)))
   return false;



  TileRender* tr = 0;
  if (time <= renderer(p).GetLastTime())
   if (fireTime < renderer(p).GetLastTime())
   {
    renderer(p).Add(tr = new TileRender(GetTile(p), p, mask), fireTime);
    ((TileRender*)renderer(p).GetStage(time+10 ))->special |= mask;
   }
   else
   {
    tr = new TileRender(GetTile(p), p, mask | ((TileRender*)renderer(p).GetStage(time+10 ))->special);
    renderer(p).Add(tr, fireTime);
   }
  else
   renderer(p).Add(tr = new TileRender(GetTile(p), p, mask), fireTime);

  if (tr)
  {
   tr->specialDuration = time + 0.7 - fireTime + 0.1;
  }
  return true;
 }
 void FireGun(Pos newpos, Dir d, bool recurse, double fireTime)
 {
  static Pos hits[100];
  static Dir hitDir[100];
  static unsigned int numHits=0;
  if (!recurse)
   numHits = 0;

  double starttime = fireTime;
  if (0) ; else for (Dir fd=((d<0)?0:d); fd<((d<0)?6:d+1); fd++)
  {
   fireTime = starttime;


   Pos p = newpos + fd;
   int range = 0;
   if (0) ; else for (; range<30; range++, p=p+fd)
   {
    Tile t = GetTile(p);
    if (tileSolid[t]!=-1)
    {
     if (t!=TRAP)
      renderer(p).Add(new TileRender(tileSolid[t]==1 ? TILE_WHITE_WALL : TILE_WHITE_TILE, p), fireTime+0.1);

     unsigned int i;
     if (0) ; else for (i=0; i<numHits; i++)
      if (hits[i]==p)
       break;
     if (i==numHits ||
      t==TRAP && (hitDir[i]&(1<<fd))==0
        )
     {
      if (i==numHits)
      {
       if (i >= sizeof(hits)/sizeof(hits[0]))
        return;
       hitDir[i] = 1 << fd;
       hits[i] = p;
       numHits++;
      }
      else
      {
       hitDir[i] |= 1 << fd;
      }
      if (t==TRAP)
      {
       int dirmask =
          1<<((fd+2) % 6)
        | 1<<((fd+6 -2) % 6);

       if (LaserTile(p, dirmask, fireTime))
        fireTime += (time+0.7 - fireTime) / 40;


       FireGun(p, (fd+1) % 6, true, fireTime);
       FireGun(p, (fd+6 -1) % 6, true, fireTime);
      }
     }
     break;
    }
    else
    {
     LaserTile(p, 1<<(fd%3), fireTime);

     fireTime += (time+0.7 - fireTime) / 40;

    }
   }


  }

  if (!recurse)
  {

   time += 0.7;
   if (0) ; else for (unsigned int i=0; i<numHits; i++)
   {
    Pos p = hits[i];
    Tile t = GetTile(p);

    if (t==TRAP)
     continue;

    ScoreDestroy(p);

    renderer(p).Add(new ExplosionRender(p, t==GUN), time);

    SetTile(p, EMPTY, false);

    if (GetItem(p))
     renderer(p,true).Add(new ItemRender(GetItem(p), 1, p), time);

    if (t==GUN)
    {
     if (0) ; else for (Dir j=0; j<6; j++)
     {
      if (GetTile(p+j)!=EMPTY)
      {
       renderer(p+j).Add(new TileRender(tileSolid[GetTile(p+j)]==1 ? TILE_WHITE_WALL : TILE_WHITE_TILE, p+j), time+0.05);
       renderer(p+j).Add(new ExplosionRender(p+j), time+0.2);

       if (GetItem(p+j))
        renderer(p+j,true).Add(new ItemRender(GetItem(p+j), 1, p), time);


      }
      ScoreDestroy(p + j);
      SetTile(p + j, EMPTY, false);
     }
    }
   }

   time += ((0.1)>(0.15) ? (0.1) : (0.15));

   CheckFinished();
  }
 }
 int GetLastPlayerRot()
 {
  RenderStage* rs = renderer.player.GetStage(-1);
  if (!rs) return 3;
  return ((PlayerRender*)rs)->r;
 }
 bool Input(Dir d)
 {
  if (dead || win || isMap)
   return false;


  UndoDone();


  if (numUndo > 0 && time < undo[numUndo-1].endTime)
   time = undo[numUndo-1].endTime;

  double realTime = time;
  double endAnimTime = time;
  bool high = (tileSolid[GetTile(player)] == 1);
  Pos playerStartPos = player;
  Pos oldpos = player;
  int oldPlayerHeight = GetHeight(oldpos);
  Pos newpos = player + d;

  int playerRot = GetLastPlayerRot();
  if (d!=-1 && d!=playerRot)
  {
   while (d!=playerRot)
   {
    if ((d+6-playerRot) % 6 < 6/2)
     playerRot = (playerRot+1) % 6;
    else
     playerRot = (playerRot+6 -1) % 6;

    time += 0.03;

    if (GetTile(oldpos) == FLOATING_BALL)
    {
     TileRender* t = new TileRender(FLOATING_BALL, oldpos);
     t->special = playerRot + 256;
     renderer(oldpos).Add(t, time);

     renderer.player.Add(new PlayerRender(playerRot, Pos(-20,-20), oldPlayerHeight, Pos(-20,-20), oldPlayerHeight, dead), time);
    }
    else
    {
     PlayerRender *p = new PlayerRender(playerRot, player, oldPlayerHeight, player, oldPlayerHeight, dead);
     p->speed = 0;
     renderer.player.Add(p, time);
    }
   }

   time += 0.03;
  }

  if (d<0 && player_items[1]==0)
   return false;

  if (d >= 0)
  {
   if (tileSolid[GetTile(newpos)] == -1)
   {
    time = realTime;
    return false;
   }
   if (Collide(newpos, high))
   {
    time = realTime;
    return false;
   }
  }


  if (numUndo >= 6)
  {
   numUndo--;
   if (0) ; else for(int i=0; i<6 -1; i++)
    undo[i] = undo[i+1];
  }
  undo[numUndo].New(d, player, player_items, time, player_score);

  if (d<0)
  {
   player_items[1]--;
  }

  double time0 = time;
  time += 0.15;

  switch (GetTile(oldpos))
  {
   case COLLAPSABLE:
    SetTile(oldpos, EMPTY);
    renderer(oldpos).Add(new DisintegrateRender(oldpos), time);
    CheckFinished();
    break;

   case COLLAPSE_DOOR:


    SetTile(oldpos, EMPTY);
    renderer(oldpos).Add(new DisintegrateRender(oldpos, 1), time);
    break;

   case COLLAPSABLE2:
    SetTile(oldpos, COLLAPSABLE, false);
    renderer(oldpos).Add(new DisintegrateRender(oldpos, 0, 1), time);
    player_score += 10;
    CheckFinished();
    break;

   case COLLAPSE_DOOR2:
    SetTile(oldpos, COLLAPSE_DOOR, false);
    renderer(oldpos).Add(new DisintegrateRender(oldpos, 1, 1), time);
    player_score += 10;
    break;

   case COLLAPSABLE3:
    SetTile(oldpos, COLLAPSABLE2);
    break;
  }

  time = time0;

  int retry_pos_count=0;
retry_pos:
  retry_pos_count++;

  if (GetItem(newpos)==1)
  {
   renderer(newpos, true).Add(new ItemCollectRender(GetItem(newpos), newpos), time + 0.4/2);
   SetItem(newpos, 0, false);
   player_items[0]++;
  }
  if (GetItem(newpos)==2)
  {
   renderer(newpos, true).Add(new ItemCollectRender(GetItem(newpos), newpos), time + 0.4/2);
   SetItem(newpos, 0, false);
   player_items[1]++;
  }

  if (GetTile(player) == FLOATING_BALL)
  {
   TileRender* t = new TileRender(FLOATING_BALL, player);
   t->special = 0;
   renderer(oldpos).Add(t, time);
  }

  PlayerRender *p = new PlayerRender(playerRot, player, oldPlayerHeight, newpos, GetHeight(newpos), dead);


  if (1)
  {
   static int l=0;
   l++;
   p->type = l & 1;
  }

  if (retry_pos_count!=0 && GetTile(player)==TRAP)
  {
   p->speed /= 1.5;
   p->type = 2;
  }
  if (d==-1)
   p->speed = 0.4 * 1.5;
  renderer.player.Add(p, time);
  endAnimTime = ((endAnimTime)>(time + p->speed+0.001) ? (endAnimTime) : (time + p->speed+0.001));
  time += p->speed;

  player = newpos;

  switch (GetTile(newpos))
  {
   case COLLAPSABLE:
    renderer(newpos).Add(new TileRender(TILE_GREEN_CRACKED, newpos), time);
    break;
   case COLLAPSE_DOOR:
    renderer(newpos).Add(new TileRender(TILE_GREEN_CRACKED_WALL, newpos), time);
    break;
   case COLLAPSABLE2:
    renderer(newpos).Add(new TileRender(TILE_BLUE_CRACKED, newpos), time);
    break;
   case COLLAPSE_DOOR2:
    renderer(newpos).Add(new TileRender(TILE_BLUE_CRACKED_WALL, newpos), time);
    break;

   case EMPTY:
    dead = true;
    break;

   case BUILDER:
   {
    double pretime = time;
    bool done = false;
    time += 0.15;
    if (0) ; else for (Dir fd=0; fd<6; fd++)
    {
     Tile t2 = GetTile(newpos + fd);
     if (t2==EMPTY)
     {
      done = true;
      SetTile(newpos+fd, COLLAPSABLE, false);
      renderer(newpos+fd).Add(new BuildRender(newpos+fd, fd, 0), time);
     }
     else if (t2==COLLAPSABLE)
     {
      done = true;
      SetTile(newpos+fd, COLLAPSE_DOOR, false);
      renderer(newpos+fd).Add(new BuildRender(newpos+fd, fd, 1), time);
     }
    }
    if (done) time += 1;
    else time = pretime;
    CheckFinished();
    endAnimTime = ((endAnimTime)>(time + 0.1) ? (endAnimTime) : (time + 0.1));
   }
   break;

   case SWITCH:
    Swap(COLLAPSE_DOOR, COLLAPSABLE);
    break;

   case FLOATING_BALL:
   {
    int step=0;
    renderer.player.Add(new PlayerRender(playerRot, Pos(-30,-30), 0, Pos(-30,-30), 0, dead), time);
    while (tileSolid[GetTile(newpos+d)]==-1)
    {
     step++;

     if (!renderer.Visible(newpos+d))
     {
      TileRender* r = new TileRender(FLOATING_BALL, newpos);
      r->special = 512;
      renderer(newpos).Add(r, time);

      PlayerRender* pr = new PlayerRender(playerRot, newpos, 0, newpos, 0, dead);
      pr->speed = 0.4*1;
      renderer.player.Add(pr, time);

      time += pr->speed;

      dead = 1;
      break;
     }
     oldpos = newpos;
     newpos = oldpos + d;

     SetTile(oldpos, EMPTY, false);
     SetTile(newpos, FLOATING_BALL, false);

     renderer(oldpos).Add(new TileRotateRender(FLOATING_BALL, oldpos, d, 2), time);
     renderer(oldpos).Add(new TileRender(EMPTY, oldpos), time + 0.25/2);
     renderer(newpos).Add(new TileRotateRender(FLOATING_BALL, newpos, (d+3)%6, 3), time + 0.25/2);





     endAnimTime = ((endAnimTime)>(time + 0.25 + 0.25/2) ? (endAnimTime) : (time + 0.25 + 0.25/2));
     time += 0.25;
    }
    player = newpos;

    if (dead)
    {
    }
    else
    {
     TileRender* r = new TileRender(FLOATING_BALL, newpos);
     r->special = playerRot + 256;
     renderer(newpos).Add(r, time);
    }
   }
   break;

   case LIFT_DOWN:
   case LIFT_UP:
   {
    SetTile(newpos, GetTile(newpos)==LIFT_UP ? LIFT_DOWN : LIFT_UP, false);
    renderer(newpos).Add(new TileRender(GetTile(newpos), newpos, 1), time);

    PlayerRender *p = new PlayerRender(playerRot, newpos, 1-GetHeight(newpos), newpos, GetHeight(newpos), dead);
    renderer.player.Add(p, time);
    endAnimTime = ((endAnimTime)>(time + 0.4) ? (endAnimTime) : (time + 0.4));
   }
   break;

   case TRAMPOLINE:
    if (d<0) break;

    oldpos = newpos;
    if (Collide(newpos + d, high))
     break;
    if (Collide((newpos + d) + d, high) == 1)
     newpos = (newpos + d);
    else
     newpos = (newpos + d) + d;
    if (tileSolid[GetTile(newpos)] == -1)
     dead=1;

    goto retry_pos;

   case SPINNER:
   {
    if (0) ; else for (Dir d=0; d<6; d++)
    {
     Tile tmp = GetTile(newpos + d);
     renderer(newpos + d).Add(new TileRotateRender(tmp, newpos + d, (d+2)%6, false), time);
    }
    Tile tmp = GetTile(newpos + Dir(6 -1));
    if (0) ; else for (Dir d=0; d<6; d++)
    {
     Tile t2 = GetTile(newpos + d);
     SetTile(newpos + d, tmp, false);
     renderer(newpos + d).Add(new TileRotateRender(tmp, newpos + d, (d+4)%6, true), time + 0.25/2);
     if (GetItem(newpos + d))
      renderer(newpos + d,true).Add(new ItemRender(GetItem(newpos + d), GetTile(newpos + d)==EMPTY, newpos+d), time + 0.25/2);

     tmp = t2;
    }
    endAnimTime = ((endAnimTime)>(time+0.25) ? (endAnimTime) : (time+0.25));

   }
   break;

   case TRAP:
   {
    if (d<0) break;

    if (player_items[0]==0)
    {
     if (tileSolid[GetTile(newpos + d)] == 1)
      break;
     newpos = newpos + d;
     if (tileSolid[GetTile(newpos)] == -1)
      dead=1;

     goto retry_pos;
    }
    else
    {
     SetTile(newpos, COLLAPSABLE3);
     player_items[0]--;
    }
   }
   break;

   case GUN:
   {
    FireGun(newpos, d, false, time);

    endAnimTime = ((endAnimTime)>(time) ? (endAnimTime) : (time));

    if (GetTile(newpos)==EMPTY)
    {
     PlayerRender* pr = new PlayerRender(playerRot, player, 0, player, 0, dead);
     pr->speed = 0.4*1;
     renderer.player.Add(pr, time);

     time += pr->speed;
     dead = 1;
    }
# 3717 "hex_puzzzle.cpp"
    break;
   }
  }

  endAnimTime = ((endAnimTime)>(time) ? (endAnimTime) : (time));

  if (dead)
  {
   win = false;

   PlayerRender* pr = new PlayerRender(player, 0, dead);
   pr->speed = 0;
   renderer.player.Add(pr, time);


   if (renderer.Visible(player))
    renderer(player).Add(new ExplosionRender(player, 0, 1), time);
   else
    renderer.player.Add(new ExplosionRender(player, 0, 1), time);

   endAnimTime = ((endAnimTime)>(time+2) ? (endAnimTime) : (time+2));
  }

  time = realTime;

  player_score += 1;

  undo[numUndo].endTime = endAnimTime;
  numUndo++;

  return true;
 }
 void Update(double timedelta)
 {
  while(deadMenu)
   delete deadMenu;

  if (activeMenu)
  {
   activeMenu->Update(timedelta);
  }
  else
   UpdateKeys();

  if (0) ; else for (int i=0; i<SDLK_LAST; i++)
   if (keyState[i])
    keyState[i] = 1;

  if (activeMenu)
   return;

  if (isMap && isRenderMap)
  {
   double min = 50;
   static double scrollHi = 0;
   double x = 0;


   {
    int xx = noMouse ? keyboardp.getScreenX()-scrollX : mousex;
    if (xx > 640) xx = 640;
    int w = (64 -18)*4;
    if (xx < w)
     x = (double)xx / (w) - 1;
    if (xx > 640 - w)
     x = 1 - (double)(640 -xx) / (w);
    x *= 500;
    if (x<-min || x>min)
    {
     scrollHi += timedelta * x;
     scrollX += (int)scrollHi;
     scrollHi -= (int)scrollHi;
    }
   }

  }
  if (undoTime>=0 && undoTime < time)
  {
   double acc = (time - undoTime) / 2;
   if (acc < 3) acc = 3;
   time -= timedelta * acc;
   if (undoTime >= time)
    UndoDone();
  }
  else
  {
   time += timedelta;
   if (turboAnim)
    time += timedelta * 20;
  }
 }
 void FileDrop(const char* filename)
 {
  LoadSave(filename, false);
 }
 void UpdateKeys()
 {





  if (!isMap && !editMode && undoTime < 0)
  {
   if (keyState[SDLK_z] || keyState[SDLK_BACKSPACE] || keyState[SDLK_u])
   {
    Undo();
    return;
   }
  }
  if (isMap && !editMode)
  {

   if ((keyState[SDLK_q] | keyState[SDLK_KP7]) & 2) keyboardp.x--;
   else if ((keyState[SDLK_d] | keyState[SDLK_KP3]) & 2) keyboardp.x++;
   else if ((keyState[SDLK_e] | keyState[SDLK_KP9]) & 2) keyboardp.x++, keyboardp.y--;
   else if ((keyState[SDLK_a] | keyState[SDLK_KP1]) & 2) keyboardp.x--, keyboardp.y++;
   else if ((keyState[SDLK_w] | keyState[SDLK_KP8] | keyState[SDLK_UP]) & 2) keyboardp.y--;
   else if ((keyState[SDLK_s] | keyState[SDLK_KP2] | keyState[SDLK_DOWN]) & 2) keyboardp.y++;
   else if ((keyState[SDLK_LEFT]) & 2) keyboardp.x--, keyboardp.y+=keyboardp.x&1;
   else if (((keyState[SDLK_RIGHT]) & 2)) { if (keyboardp.x < mapRightBound) keyboardp.y-=keyboardp.x&1, keyboardp.x++; }
   else if ((keyState[SDLK_RETURN] | keyState[SDLK_KP5] | keyState[SDLK_SPACE] | keyState[SDLK_KP_ENTER]) & 2)
   {

    Mouse(keyboardp.getScreenX()-scrollX, keyboardp.getScreenY()-scrollY, 0, 0, 1, 0, 0);
    noMouse = 1;
    return;
   }
   else
   {
    if (noMouse)
     UpdateCursor(keyboardp);
    return;
   }
   int min[21] = { 17, 16, 15, 14, 13, 13, 13, 13, 13, 13, 12, 11, 11, 13, 12, 11, 8, 8, 7, 6, 7 };
   int max[21] = { 20, 20, 19, 19, 19, 19, 18, 21, 20, 20, 19, 19, 18, 18, 17, 16, 16, 16, 15, 15, 14 };
   if (keyboardp.x < 3) keyboardp.x = 3;
   if (keyboardp.x > mapRightBound) keyboardp.x = mapRightBound;

   if (keyboardp.y < min[keyboardp.x-3]) keyboardp.y = min[keyboardp.x-3];
   if (keyboardp.y > max[keyboardp.x-3]) keyboardp.y = max[keyboardp.x-3];
   noMouse = 1;
   UpdateCursor(keyboardp);
  }
  else if (!editMode && (numUndo==0 || time>=undo[numUndo-1].endTime))
  {
   static int usedDiag = 0;

   if (keyState[SDLK_q] || keyState[SDLK_KP7]) HandleKey('q', 0);
   else if (keyState[SDLK_w] || keyState[SDLK_KP8]) HandleKey('w', 0);
   else if (keyState[SDLK_e] || keyState[SDLK_KP9]) HandleKey('e', 0);
   else if (keyState[SDLK_a] || keyState[SDLK_KP1]) HandleKey('a', 0);
   else if (keyState[SDLK_s] || keyState[SDLK_KP2]) HandleKey('s', 0);
   else if (keyState[SDLK_d] || keyState[SDLK_KP3]) HandleKey('d', 0);

   else if (keyState[SDLK_UP] && keyState[SDLK_LEFT]) HandleKey('q', 0), usedDiag=1;
   else if (keyState[SDLK_UP] && keyState[SDLK_RIGHT]) HandleKey('e', 0), usedDiag=1;
   else if (keyState[SDLK_DOWN] && keyState[SDLK_LEFT]) HandleKey('a', 0), usedDiag=1;
   else if (keyState[SDLK_DOWN] && keyState[SDLK_RIGHT]) HandleKey('d', 0), usedDiag=1;
   else if (keyState[SDLK_UP] && !usedDiag) HandleKey('w', 0);
   else if (keyState[SDLK_DOWN] && !usedDiag) HandleKey('s', 0);

   else usedDiag = 0;
  }
 }
 void KeyReleased(int key)
 {
  keyState[key] = 0;
 }
 bool KeyPressed(int key, int mod)
 {
  keyState[key] = 2;

  if (activeMenu)
  {
   bool eat = activeMenu->KeyPressed(key, mod);
   if (!activeMenu)
    memset(keyState, 0, sizeof(keyState));
   return eat;
  }
  else
  {
   if ((key==SDLK_ESCAPE && (mod & (KMOD_LCTRL|KMOD_RCTRL))))
   {
    if (mod & (KMOD_LSHIFT|KMOD_RSHIFT))
    {
     time = 0;
     renderer.Reset();
     LoadSaveProgress(false);
    }

    LoadMap();
   }

   if (isFadeRendering)
    return false;

   return HandleKey(key, mod);
  }
 }
 bool HandleKey(int key, int mod)
 {
  turboAnim = 0;
# 3929 "hex_puzzzle.cpp"
  if (0) {}

  else if ((key=='p' && !editMode || key==SDLK_PAUSE || key==SDLK_ESCAPE))
  {
   noMouse = 1;
   new PauseMenu(isMap, progress.GetLevel("Levels\\0_green\\triangular.lev", true)->Completed(), progress.general.endSequence>=1, progress.general.endSequence>=2);
  }
# 3966 "hex_puzzzle.cpp"
  if (isMap && !editMode)
   return false;

  else if (key==SDLK_KP9 || key=='e') Input(1), noMouse=1;
  else if (key==SDLK_KP3 || key=='d') Input(2), noMouse=1;
  else if (key==SDLK_KP1 || key=='a') Input(4), noMouse=1;
  else if (key==SDLK_KP7 || key=='q') Input(5), noMouse=1;
  else if (key==SDLK_KP8 || key=='w') Input(0), noMouse=1;
  else if (key==SDLK_KP2 || (key=='s' && (((mod & ((KMOD_LCTRL|KMOD_RCTRL)|(KMOD_LALT|KMOD_RALT)))==0)||!editMode))) Input(3), noMouse=1;
  else if (key==SDLK_KP5 || key==SDLK_SPACE || key==SDLK_RETURN || key==SDLK_KP_ENTER)
  {
   noMouse=1;
   if (win && winFinal)
    LoadMap(), memset(keyState, 0, sizeof(keyState));
   else
    Input(-1);
  }

  else if (key=='r' && (mod & (KMOD_LCTRL|KMOD_RCTRL)))
   LoadSave(currentFile, false);
# 4001 "hex_puzzzle.cpp"
  else if (key=='z' || key==SDLK_BACKSPACE || key==SDLK_DELETE || key=='u')
  {
   if (!isMap)
    Undo();
  }
# 4109 "hex_puzzzle.cpp"
  else
   return false;

  return true;
 }
 void LoadGraphics()
 {

# 1 "gfx_list.h" 1
# 21 "gfx_list.h"
gradient = Load("." "/graphics/" "gradient" ".dat", false);
mapBG = Load("." "/graphics/" "map" ".dat", false);
mapBG2 = Load("." "/graphics/" "map_top" ".dat", true);
tileGraphics = Load("." "/graphics/" "tiles" ".dat", true);
tileGraphicsR = Load("." "/graphics/" "tiles_reflect" ".dat", true);
girlGraphics = Load("." "/graphics/" "emi" ".dat", true);
titlePage = Load("." "/graphics/" "title" ".dat", false);
# 4118 "hex_puzzzle.cpp" 2

  static int first = 1;
  if (first)
  {
   first = false;
   MakeTileInfo();
  }






  SDL_ShowCursor(1);
 }
 void FreeGraphics()
 {

# 1 "gfx_list.h" 1
# 21 "gfx_list.h"
if (gradient) SDL_FreeSurface(gradient), gradient=0;
if (mapBG) SDL_FreeSurface(mapBG), mapBG=0;
if (mapBG2) SDL_FreeSurface(mapBG2), mapBG2=0;
if (tileGraphics) SDL_FreeSurface(tileGraphics), tileGraphics=0;
if (tileGraphicsR) SDL_FreeSurface(tileGraphicsR), tileGraphicsR=0;
if (girlGraphics) SDL_FreeSurface(girlGraphics), girlGraphics=0;
if (titlePage) SDL_FreeSurface(titlePage), titlePage=0;
# 4137 "hex_puzzzle.cpp" 2
 }
 virtual void ScreenModeChanged()
 {


 }
};

static StateMaker<HexPuzzle> _maker_HexPuzzle(SDLK_F1, false);;

char * HexPuzzle::loadPtr = 0;
char * HexPuzzle::endLoad = 0;